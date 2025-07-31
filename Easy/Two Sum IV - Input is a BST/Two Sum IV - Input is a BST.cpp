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
    void inorder_traversal(TreeNode * root,vector<int> & tree){
        if(root==nullptr)
            return;
        inorder_traversal(root->left,tree);
        tree.push_back(root->val);
        inorder_traversal(root->right,tree);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> tree;
        inorder_traversal(root,tree);
        int i=0,j=tree.size()-1;
        while(i<j){
            if(tree[i]+tree[j]==k)
                return true;
            else if(tree[i]+tree[j]>k)
                j--;
            else 
                i++;
        }
    return false;
    }
};
