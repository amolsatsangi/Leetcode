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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec_level;
        if(root == nullptr)
            return vec_level;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int qsize = q.size();
            vector<int> temp_vec;
            while(qsize){
                TreeNode * node = q.front();
                q.pop();
                temp_vec.push_back(node->val);
                qsize--;
                if(node->left != nullptr)
                    q.push(node->left);
                if(node->right != nullptr)
                    q.push(node->right);
            }
            vec_level.push_back(temp_vec);
        }
    return vec_level;
    }
};
