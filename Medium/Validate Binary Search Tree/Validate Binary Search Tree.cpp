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
    bool validBST(TreeNode* root, long int left, long int right){
        if(root == nullptr)
            return true;
        if(root->val <= left || root->val>=right)
            return false;
        return validBST(root->left, left, root->val) and validBST(root->right, root->val,right);
    }
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)
            return true;
        long int l  = -2147483650;
        long int r  = 2147483650;
        return validBST(root, l, r);
    }
};
