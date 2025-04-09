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
    int widthOfBinaryTree(TreeNode* root) {
        long int max_width{0};
        if(root==nullptr)
            return max_width;
        queue<pair<TreeNode *,long int>> q;
        q.push({root,0});
        while(!q.empty()){
            long int size = q.size();
            long int mmin = q.front().second;
            long int first{0},last{0};
            for(int i=0;i<size;i++){
                long int curr_index = q.front().second - mmin;
                auto tp = q.front();
                q.pop();
                TreeNode * node = tp.first;
                int j = tp.second;
                if(i==0)
                    first = curr_index;
                else if(i== size-1)
                    last = curr_index;
                if(node->left){
                    q.push({node->left,curr_index*2+1});
                }
                if(node->right){
                    q.push({node->right,curr_index*2+2});
                }
            }
            max_width = max(max_width,last-first+1);
        }
    return  max_width;
    }
};
