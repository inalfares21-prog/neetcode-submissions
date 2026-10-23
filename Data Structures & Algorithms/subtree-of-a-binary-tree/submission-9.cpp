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
bool sol(TreeNode* r, TreeNode* s){
    if(!r)return !s;
    if(!s)return !r;
    if(r->val!=s->val)return false;
    return sol(r->left,s->left)&&sol(r->right,s->right);
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)return false;
       if(sol(root,subRoot))return true;
       return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
        
    }
};
