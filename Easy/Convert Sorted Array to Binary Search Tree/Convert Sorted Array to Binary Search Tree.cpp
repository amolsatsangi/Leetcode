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
    TreeNode* sorted_array_to_BST(vector<int>&nums, int start,int end){
        if(end<=start)
            return nullptr;
        int mid = (start+end)/2;
        TreeNode * node = new TreeNode(nums[mid]);
        node->left = sorted_array_to_BST(nums,start,mid);
        node->right = sorted_array_to_BST(nums,mid+1,end);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sorted_array_to_BST(nums,0,nums.size());
    }
};
