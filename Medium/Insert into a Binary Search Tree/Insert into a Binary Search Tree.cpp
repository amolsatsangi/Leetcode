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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode * node = new TreeNode(val);
        if(root==nullptr)
            return node;
        TreeNode * q{root};
        while(true){
            if(q->val<val){
                if(q->right)
                    q=q->right;
                else{
                    q->right = node;
                    break;
                }
            }
            else{
                if(q->left)
                    q=q->left;
                else{
                    q->left = node;
                    break;
                }
            }
        }
    return root;
    }
};
