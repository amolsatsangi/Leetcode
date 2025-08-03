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
    void DFS(TreeNode * left, TreeNode * right, int level){
        if(!left || !right)
            return;
        if(level%2){
        int temp = right->val;
        right->val = left->val;
        left->val = temp;
        }
        level++;
        DFS(left->left,right->right, level);
        DFS(right->left,left->right, level);

    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        int level{0};
        if(root == nullptr)
            return nullptr;
        level++;
        DFS(root->left, root->right,level);
        return root;
    }
};
