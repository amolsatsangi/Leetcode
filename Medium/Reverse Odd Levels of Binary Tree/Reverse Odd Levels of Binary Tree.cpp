/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void level_order(TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        int count{0};
        while(!q.empty()){
            int size = q.size();
            count++;
            vector<TreeNode *> vec;
            for(int i=0;i<size;i++){
                TreeNode * node = q.front();
                q.pop();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                if(count%2){
                    if(node->left)
                        vec.push_back(node->left);
                    if(node->right)
                        vec.push_back(node->right);
                }
            }
            for(int i=0;i<vec.size()/2;i++){
                int temp = vec[i]->val;
                vec[i]->val = vec[vec.size()-1-i]->val;
                vec[vec.size()-1-i]->val = temp;
            }
        }
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        level_order(root);
        return root;
    }
};
