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
    void preorder(TreeNode* root, vector<int> & vec){
        if(root!= nullptr){
        preorder(root->left,vec);
        vec.push_back(root->val);
        preorder(root->right,vec);
        }
    }
    int getMinimumDifference(TreeNode* root) {
       vector<int> vec;
       preorder(root, vec);
       
       int diff{INT_MAX};
       for(int i=1;i<vec.size();i++){
            diff = min(diff,vec[i]-vec[i-1]);
       }
       return diff;
    }
};
