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
    void inorder(TreeNode* root,int & count,int & ans,int & k){
        if(root==nullptr){
            return;
        }
        inorder(root->left,count,ans,k);
        count++;
        if(count == k)
            ans = root->val;
        inorder(root->right,count,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count{0},ans{0};
        inorder(root,count,ans,k);
        return ans;   
    }
};
