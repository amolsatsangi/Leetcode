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
    void leafs(TreeNode *root, vector<int> &vec){
        if(root == nullptr)
            return;
        else if(root->left == nullptr && root->right == nullptr)
            vec.push_back(root->val);
        leafs(root->left, vec);
        leafs(root->right, vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf_vec1, leaf_vec2;
        leafs(root1, leaf_vec1);
        leafs(root2, leaf_vec2);
        if(leaf_vec1.size()!=leaf_vec2.size())
            return false;
        for(int i=0;i<leaf_vec1.size();i++){
            if(leaf_vec1[i]!=leaf_vec2[i])
                return false;
        }
        return true;;
    }
};
