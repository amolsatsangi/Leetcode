/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool get_path(TreeNode * root, vector<TreeNode *> & vec,TreeNode *node){
        if(!root)
            return false;
        vec.push_back(root);
        if(node == root)
            return true;
        if(get_path(root->left,vec,node) || get_path(root->right,vec,node)){
            return true;
        }
        vec.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode * > v1,v2;
        if(!get_path(root,v1,p) || !get_path(root,v2,q))
            return nullptr;
        int i{0};
        while(i<v1.size() && i<v2.size() && v1[i]==v2[i]){
            i++;
        }
        return v1[i-1];
    }
};
