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
    TreeNode * builfFunc(vector<int>& preorder, int preStart, int preEnd,vector<int>& inorder, int inStart, int inEnd, unordered_map<int,int>&mp){
        if(preStart>preEnd || inStart>inEnd)
            return nullptr;
        int inRoot = mp[preorder[preStart]];
        int inleft = inRoot-inStart;
        TreeNode * root = new TreeNode(preorder[preStart]);
        root->left = builfFunc(preorder, preStart+1,preStart+inleft, inorder,  inStart, inRoot-1 ,mp);
        root->right = builfFunc(preorder, preStart+inleft+1, preEnd, inorder,inRoot+1,  inEnd,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        TreeNode * root = builfFunc(preorder, 0, preorder.size()-1,inorder, 0,inorder.size()-1, mp);
        return root;
    }
};
