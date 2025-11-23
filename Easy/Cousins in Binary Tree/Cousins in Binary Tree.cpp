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
    void preorder(TreeNode* root, int val, int d, int & dis, TreeNode* &p, TreeNode * parent){
        if(root == nullptr)
            return;
        if(root->val == val){
            dis =d;
            p = parent;
        }
        preorder(root->left,val,d+1,dis,p,root);
        preorder(root->right,val,d+1,dis,p,root);
       
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int d1,d{0};
        TreeNode * p1{nullptr}, * p2{nullptr},*p;
        preorder(root,x,d,d1,p1,p);
        int d2;
        d=0;
        p =nullptr;
        preorder(root,y,d,d2,p2,p);
        return (d1 == d2 && p1!=p2);
    }
};
