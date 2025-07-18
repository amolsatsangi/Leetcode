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

    void getPath(TreeNode *root, vector<string>&ans, string path) {
        
        if(!root->left && !root->right)     {
            ans.push_back(path);
            return;
        }


        if(root->left) getPath(root->left, ans, path+"->"+to_string(root->left->val)) ;

        if(root->right) getPath(root->right, ans, path+"->"+to_string(root->right->val));

    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;

        if(!root) return ans;

        getPath(root,ans,to_string(root->val));

        return ans;
    }
};
