/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        int a=0;
        int b=0;
        Node*x=p;
        while(x->parent){
            a++;
            x=x->parent;
        }
        Node*y=q;
        while(y->parent){
            b++;
            y=y->parent;
        }
        while(p!=q){
            if(a>b){
                p=p->parent;
                a--;
            }
            else{
                q=q->parent;
                b--;
            }
        }
        return p;
    }
};