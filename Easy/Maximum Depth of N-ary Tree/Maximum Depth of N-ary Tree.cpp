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
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        queue<Node *> q;
        q.push(root);
        int depth{0};
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                Node * temp = q.front();
                q.pop();
                int c_size = (temp->children).size();
                for(int j=0;j<c_size;j++){
                    if(temp->children[j])
                        q.push(temp->children[j]);
                }
            }
            depth++;
        }
    return depth;
    }
};
