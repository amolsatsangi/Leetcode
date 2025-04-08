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
    void right_recursion(TreeNode * root, int level, vector<int> &right_vec){
        if(root==nullptr)
            return;
        if(level == right_vec.size())
            right_vec.push_back(root->val);
        right_recursion(root->right, level+1, right_vec);
        right_recursion(root->left, level+1, right_vec);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> right_vec;
        if(root==nullptr)
            return right_vec;
        right_recursion(root,0,right_vec);
    return right_vec;
    }
};
