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
    void preorder(TreeNode* root, int val, int & d){
        preorder(root->left,val,d+1);
        preorder(root->right,val,d+1);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int d1 = preorder(root,x,0);
        int d2 = preorder(root,y,0);
        cout<<d1<<d2<<endl;
        return d1 == d2;
    }
};
