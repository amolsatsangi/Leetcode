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
    TreeNode * bstFromPreorder(vector<int>& preorder,int preStart,int preEnd,vector<int>& inorder,int inStart,int inEnd, unordered_map<int,int> & umap){
        if(preStart>preEnd || inStart>inEnd)
            return nullptr;
        TreeNode * root = new TreeNode(preorder[preStart]);
        int inIndex = umap[root->val];
        int leftTree_Nodecount = inIndex - inStart;
        root->left = bstFromPreorder(preorder,preStart+1,preStart+leftTree_Nodecount,inorder,inStart,inIndex-1,umap);
        root->right = bstFromPreorder(preorder,preStart+leftTree_Nodecount+1,preEnd,inorder,inIndex+1,inEnd,umap);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder{preorder};
        sort(inorder.begin(),inorder.end());
        unordered_map<int,int> umap;
        for(int i=0;i<inorder.size();i++){
            umap[inorder[i]]=i;
        }
        return bstFromPreorder(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,umap);
    }
};
