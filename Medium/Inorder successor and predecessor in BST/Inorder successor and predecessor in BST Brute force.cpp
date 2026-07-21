/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
	public:
		vector<int> succPredBST(TreeNode* root,int key){
			vector<int> inorder;
            inorder_traversal(inorder,root);
            int pre{-1},post{-1}, i{-1};
            for(i=0;i<inorder.size();i++){
                if(inorder[i]==key){
                    break;
                }
            }
            if(i-1>=0)
                pre = inorder[i-1];
            if(i+1<inorder.size())
                post = inorder[i+1];
            return {pre,post};
		}
        void inorder_traversal(vector<int> & inorder,TreeNode* root){
            if(root==nullptr)
                return;
            inorder_traversal(inorder,root->left);
            inorder.push_back(root->data);
            inorder_traversal(inorder,root->right);
        }
        
};
