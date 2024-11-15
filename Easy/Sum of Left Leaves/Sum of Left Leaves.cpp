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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr)
            return sum;
        if(root->left!=nullptr && root->left->left == nullptr && root->left->right == nullptr){
            sum=sum+root->left->val;
            cout<<sum<<endl;
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return sum;
    }
};
