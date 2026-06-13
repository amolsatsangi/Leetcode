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
    int calculateLeftHeight(TreeNode* root){
        if(root==nullptr)
            return 0;
        int count{0};
        while(root!=nullptr){
            count++;
            root=root->left;
        }
        return count;
    }
    int calculateRightHeight(TreeNode* root){
        if(root!=nullptr)
            return 0;
        int count{0};
        while(root!=nullptr){
            count++;
            root=root->right;
        }
        return count;
    }
    int countNodes(TreeNode* root) {
        if(root==nullptr)
            return 0;
        int leftHeight = calculateLeftHeight(root);
        int rightHeight = calculateRightHeight(root);
        if(leftHeight==rightHeight)
            return pow(2,leftHeight)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
