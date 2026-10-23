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
    void s(Node*root,vector<int>&res){
        if(root==nullptr)return ;
        for(int i=0;i<root->children.size();i++){
           s(root->children[i],res);
        }
        res.push_back(root->val);
    }
public:
    vector<int> postorder(Node* root) {
        vector<int>res;
        s(root,res);
        return res;
        
    }
};