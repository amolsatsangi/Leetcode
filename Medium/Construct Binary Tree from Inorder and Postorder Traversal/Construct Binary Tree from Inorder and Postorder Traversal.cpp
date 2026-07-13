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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> umap;
        for(int i=0;i<inorder.size();i++)
            umap[inorder[i]]=i;
        TreeNode* root = buildTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,umap);
        return root;
    }
    TreeNode * buildTree(vector<int>& inorder,int inStart,int inEnd,vector<int>& postorder,int postStart,int postEnd, unordered_map<int,int> & umap){
        if(inStart>inEnd || postStart > postEnd)
            return nullptr;
        TreeNode * root = new TreeNode(postorder[postEnd]);
        int inIndex = umap[root->val];
        int rightLeft = inEnd - inIndex;
        root->right = buildTree(inorder,inIndex+1,inEnd,postorder,postEnd-rightLeft,postEnd-1,umap);
        root->left = buildTree(inorder,inStart,inIndex-1,postorder,postStart,postEnd-rightLeft-1,umap);
        return root;
    }
};
