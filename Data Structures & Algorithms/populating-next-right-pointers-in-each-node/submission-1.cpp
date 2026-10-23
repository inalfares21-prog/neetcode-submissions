/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        queue<Node*>q;
        q.push(root);
        while(q.size()>0){
            int s=q.size();
            Node*r=q.front();
            for(int i=0;i<s;i++){
                if(r->left)q.push(r->left);
                if(r->right)q.push(r->right);
                q.pop();
                if(i==s-1)break;
                r->next=q.front();
                r=q.front();
            }
            r->next=nullptr;  
        }
        return root;
        
    }
};