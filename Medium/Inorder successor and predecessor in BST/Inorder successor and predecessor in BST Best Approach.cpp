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
			int predessor{-1}, successor{-1};
            findPredessor(root,key,predessor);
            findSuccessor(root,key,successor);
            return {predessor,successor};
		}
        void findPredessor(TreeNode* root,int key,int & predessor){
            if(root==nullptr)
                return;
            if(root->data>=key){
                findPredessor(root->left,key,predessor);
            }
            else{
                predessor = root->data;
                findPredessor(root->right,key,predessor);
            }
        }
        void findSuccessor(TreeNode* root,int key,int & successor){
            if(root==nullptr)
                return;
            if(root->data>key){
                successor = root->data;
                findSuccessor(root->left,key,successor);
            }
            else{
                findSuccessor(root->right,key,successor);
            }
        }
};
