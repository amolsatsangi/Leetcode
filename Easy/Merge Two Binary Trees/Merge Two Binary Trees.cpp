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
    TreeNode * merge(TreeNode* root,TreeNode* root1,TreeNode* root2){
        if(!root1 && !root2)
            return nullptr;
        root = new TreeNode();
        if(!root1){
            root->val = root2->val;
            root->left = merge(root->left,root1,root2->left);
            root->right = merge(root->right,root1,root2->right);
        }
        else if(!root2){
            root->val = root1->val;
            root->left = merge(root->left,root1->left,root2);
            root->right = merge(root->right,root1->right,root2);
        }
        else{
            root->val = root1->val+root2->val;
            root->left = merge(root->left,root1->left,root2->left);
            root->right = merge(root->right,root1->right,root2->right);
        }

        return root;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode * root;
        root = merge(root,root1,root2);
        return root;
    }
};
