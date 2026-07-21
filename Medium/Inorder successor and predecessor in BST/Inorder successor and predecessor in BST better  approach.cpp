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
            int pred{-1},succ{-1};
            TreeNode * prev;
            inorder_traversal(root,key,pred,succ,prev);
            return {pred,succ};
		}
        void inorder_traversal(TreeNode* root,int & key, int & pred,int & succ,TreeNode * & prev){
            if(root==nullptr)
                return;
            inorder_traversal(root->left,key,pred,succ,prev);
            if(prev && prev->data<key){
                pred = prev->data;
            }
            if(succ == -1 && root->data>key)
                succ = root->data;
            prev = root;
            inorder_traversal(root->right,key,pred,succ,prev);
           
        }
        
};
