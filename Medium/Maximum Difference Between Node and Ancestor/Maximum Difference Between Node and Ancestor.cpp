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
    void find_min_max(TreeNode * root,int mini,int maxi,int & diff){
        if(root == nullptr)
            return;
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);
        diff = max(diff, maxi-mini);
        find_min_max(root->right,mini,maxi,diff);
        find_min_max(root->left,mini,maxi,diff);

    }
    int maxAncestorDiff(TreeNode* root) {
        int diff{0};
        int mini{INT_MAX}, maxi{INT_MIN};
        find_min_max(root,mini,maxi, diff);
        return diff;
    }
};
