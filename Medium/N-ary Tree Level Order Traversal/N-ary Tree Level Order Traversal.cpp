/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void BFS(vector<vector<int>> & vec,Node* root){
        queue<Node * > q;
        q.push(root);
        vec.push_back({root->val});
        while(!q.empty()){
            int qsize = q.size();
            vector<int> level;
            while(qsize){
                Node * node = q.front();
                q.pop();
                int size = node->children.size();
                for(int i=0;i<size;i++){
                    if(node->children[i]!=nullptr) {
                        q.push(node->children[i]);
                        level.push_back(node->children[i]->val);
                    }
                }
                
                qsize--;
            }
            if(level.size()!=0)
                vec.push_back(level);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> vec;
        if(root == nullptr)
            return vec;
        BFS(vec,root);
        return vec;
    }
};
