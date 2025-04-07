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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>> zl_vec;
        bool flag{true};
        if(root == nullptr)
            return zl_vec;
        q.push(root);
        while(!q.empty()){
            int size = q.size(),i{0};
            vector<int> level_vec(size);
            while(i<size){
                TreeNode * node = q.front();
                q.pop();
                int index = flag ? i : size-i-1;
                level_vec[index] = node->val;
               
                if(node->left != nullptr)
                    q.push(node->left);
                if(node ->right != nullptr)
                    q.push(node->right);
                i++;
            }
            zl_vec.push_back(level_vec);
            flag = flag==true?false:true;
        }
        return  zl_vec;
    }
};
