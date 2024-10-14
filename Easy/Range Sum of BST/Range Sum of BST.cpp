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
    int sum{0};
    void inorder(TreeNode * root, int low, int high)
    {
        if(root){
            inorder(root->left, low, high);
            if(root ->val >=low && root ->val<=high){
                sum+=root->val;
                cout<<root->val<<" "<<sum<<endl;
            }
            inorder(root->right, low, high);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==nullptr)
            return 0;
        inorder(root, low, high);
    return sum;
    }
};
