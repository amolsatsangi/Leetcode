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
    int amountOfTime(TreeNode* root, int start) {
        queue<TreeNode*> q;
           unordered_map<TreeNode*,TreeNode*> parentMap;
           q.push({root});
           TreeNode * target_node;
           while(!q.empty()){
                auto node = q.front();
                if(node->val==start){
                    target_node = node;
                }
                q.pop();
                if(node->left){
                    parentMap[node->left] = node;
                    q.push(node->left);
                }
                if(node->right){
                    parentMap[node->right] = node;
                    q.push(node->right);
                }
           }
           int time{0};
           set<TreeNode*> visited;
            q.push(target_node);
            visited.insert(target_node);
            while(!q.empty()){
                int qsize = q.size();
                for(int i=0;i<qsize;i++){
                    auto node = q.front();
                    q.pop();
                    if(node->left && visited.find(node->left)==visited.end()){
                        q.push(node->left);
                        visited.insert(node->left);
                    }
                    if(node->right && visited.find(node->right)==visited.end()){
                        q.push(node->right);
                        visited.insert(node->right);
                    }
                    if(parentMap.find(node)!=parentMap.end() && visited.find(parentMap[node])==visited.end()){
                        q.push(parentMap[node]);
                        visited.insert(parentMap[node]);
                    }
                }
                time++;
            }
            return time-1;
    }
};
