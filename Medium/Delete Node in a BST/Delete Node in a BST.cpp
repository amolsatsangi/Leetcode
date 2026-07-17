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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)
            return nullptr;
        if(root->val == key){
            return helper(root);
        }
        TreeNode * ptr = root;
        while(ptr){
            if(ptr->val>key){
                if(ptr->left!=nullptr && ptr->left->val == key){
                    ptr->left = helper(ptr->left);
                    break;
                }
                else{
                    ptr = ptr->left;
                }
            }
            else{
                if(ptr->right!=nullptr && ptr->right->val == key){
                    ptr->right = helper(ptr->right);
                    break;
                }
                else
                    ptr = ptr->right;
            }
        }
        return root;
    }
    TreeNode* helper(TreeNode * root){
        if(root->left ==nullptr)
            return root->right;
        else if(root->right == nullptr)
            return root->left;
        TreeNode * leftChild = root->left;
        TreeNode * rightChild = root->right;
        TreeNode * LeftTree_lastRight = findRight(root->left);
        LeftTree_lastRight ->right = rightChild;
        return leftChild;
    }
    TreeNode * findRight(TreeNode * root){
        while(root->right!=nullptr)
            root=root->right;
        return root;
    }

};
