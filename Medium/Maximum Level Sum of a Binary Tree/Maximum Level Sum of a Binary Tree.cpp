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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode *> q;
        int maxi{INT_MIN}, level{0},ans{0};
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            int lsum{0};
            while(size){
                TreeNode * node = q.front();
                q.pop();
                lsum+=node->val;
                size--;
                if(node->left!= nullptr)
                    q.push(node->left);
                if(node->right!= nullptr)
                    q.push(node->right);
            }
            level++;
            if(maxi<lsum){  
                maxi = lsum;
                ans = level;
            }
        }
    return ans;
    }
};
