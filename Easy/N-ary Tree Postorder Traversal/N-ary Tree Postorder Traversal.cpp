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
    void post_order(Node* root,vector<int> & vec){
        if(root==nullptr)
            return;
        for(int i=0;i<root->children.size();i++){
            if(root->children[i]!=nullptr)
                post_order(root->children[i],vec);
        }
        vec.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> vec;
        if(root==nullptr)
            return vec;
        post_order(root,vec);
        return vec;
    }
};
