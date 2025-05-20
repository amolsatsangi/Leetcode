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
    void pre_order(Node* root, vector<int> &vec){
        if(root==nullptr)
            return;
        vec.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            pre_order(root->children[i],vec);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> vec;
        if(root==nullptr)
            return vec;
        pre_order(root,vec);
        return vec;
    }
};
