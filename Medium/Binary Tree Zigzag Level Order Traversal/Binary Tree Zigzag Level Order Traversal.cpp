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
        bool flag{false};
        if(root == nullptr)
            return zl_vec;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level_vec;
            while(size){
                TreeNode * node = q.front();
                q.pop();
                level_vec.push_back(node->val);
                if(node->left != nullptr)
                    q.push(node->left);
                if(node ->right != nullptr)
                    q.push(node->right);
                size--;
            }
            if(flag == true)
               reverse(level_vec.begin(), level_vec.end());
            zl_vec.push_back(level_vec);
            flag = flag==true?false:true;
        }
        return  zl_vec;
    }
};
