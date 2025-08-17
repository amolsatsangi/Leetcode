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
    void help(TreeNode * root,long & mini,long & smini){
        if(root==nullptr)
            return;
        if(root->val<mini){
            smini = mini;
            mini = root->val;
        }
        else if(root->val<smini && root->val != mini){
            smini = root->val;
        }
        help(root->left,mini,smini);
        help(root->right,mini,smini);
    }
    int findSecondMinimumValue(TreeNode* root) {
        long int mini{LONG_MAX},smini{LONG_MAX};
        help(root,mini,smini);
        return smini == LONG_MAX? -1: smini;
    }
};
