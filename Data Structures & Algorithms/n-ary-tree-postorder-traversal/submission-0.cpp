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
void sol(vector<int>&res,Node* root){
    if(root==nullptr)return;
    for(int i=0;i<root->children.size();i++){
        sol(res,root->children[i]);
    }
    
    res.push_back(root->val);
   
}
    vector<int> postorder(Node* root) {
        vector<int>res;
        sol(res,root);
        return res;
        
    }
};