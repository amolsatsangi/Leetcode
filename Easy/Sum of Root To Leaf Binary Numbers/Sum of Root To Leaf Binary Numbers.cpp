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
    int DFS(TreeNode * root, int val){
        if(root==nullptr)
            return 0;
        val = val*2+root->val;
        return root->right == root->left? val:DFS(root->left,val)+DFS(root->right,val);
    }
    int sumRootToLeaf(TreeNode* root) {
        return DFS(root,0);
    }
};
