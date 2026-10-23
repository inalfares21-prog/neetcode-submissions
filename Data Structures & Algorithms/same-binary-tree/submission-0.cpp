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
private:
void sol(TreeNode* p, TreeNode* q, bool& d){
    if(p==nullptr&&q!=nullptr||p!=nullptr&&q==nullptr){
        d=false;
        return;
    }
    if(p==nullptr&&q==nullptr){
        return;
    }

    if(p->val!=q->val){
        d=false;   
    }
    sol(p->right,q->right,d);
    sol(p->left,q->left,d);
}
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool d=true;
        sol(p,q,d);
        return d;
        
    }
};
