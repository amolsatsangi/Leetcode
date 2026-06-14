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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        queue<TreeNode * > q;
        unordered_map<TreeNode *, TreeNode *> parentMap;
        q.push(root);
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            if(node->left){
                parentMap[node->left]=node;
                q.push(node->left);
            }
            if(node->right){
                parentMap[node->right]=node;
                q.push(node->right);
            }
        }
        vector<int> result;
        unordered_set<TreeNode *> vis;
        q.push(target);
        int dist{0};
        vis.insert(target);
        while(!q.empty()){
            if(dist == k){
                while(!q.empty()){
                    result.push_back(q.front()->val);
                    q.pop();
                }
                return result;
            }
            int qsize = q.size();
            for(int i=0;i<qsize;i++){
                auto node = q.front();
                q.pop();
                if(node->left && vis.find(node->left)==vis.end()){
                    q.push(node->left);
                    vis.insert(node->left);
                }
                if(node->right && vis.find(node->right)==vis.end()){
                    q.push(node->right);
                    vis.insert(node->right);
                }
                if(parentMap.find(node)!=parentMap.end() && vis.find(parentMap[node])==vis.end()){
                    q.push(parentMap[node]);
                    vis.insert(parentMap[node]);
                }
            }
            dist++;
        }
        return {};
    }
};
