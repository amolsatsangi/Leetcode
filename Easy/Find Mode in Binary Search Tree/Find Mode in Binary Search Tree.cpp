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
    void inorder(TreeNode* root, unordered_map<int,int> & umap){
        if(root==nullptr)
            return;
        inorder(root->left,umap);
        umap[root->val]++;
        inorder(root->right,umap);
    }
    vector<int> findMode(TreeNode* root) {
       unordered_map<int,int> umap;
       inorder(root,umap);
       vector<int> vec;
       int maxi{0};
       for(auto e:umap){
        maxi = max(maxi,e.second);
       }
       for(auto e:umap){
            if(maxi == e.second)
                vec.push_back(e.first);
       }
    return vec;
    }
};
