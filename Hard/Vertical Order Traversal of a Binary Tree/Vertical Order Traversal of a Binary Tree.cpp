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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,priority_queue<int,vector<int>,greater<int>>>> VLmap;
        queue<pair<TreeNode *, pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            int qsize = q.size();
            for(int i=0;i<qsize;i++){
                auto node_info = q.front();
                q.pop();
                TreeNode * node = node_info.first;
                int x = node_info.second.first; int y = node_info.second.second;
                VLmap[x][y].push(node->val);
                if(node->left){
                    q.push({node->left,{x-1,y+1}});
                }
                if(node->right){
                    q.push({node->right,{x+1,y+1}});
                }
            }
        }

        vector<vector<int>> vertical_view;
        for(auto & p: VLmap){
            vector<int> column;
            for(auto & q:p.second){
                while(!q.second.empty()){
                    column.push_back(q.second.top());
                    q.second.pop();
                }
            }
            vertical_view.push_back(column);
        }
        return vertical_view;
    }
};
