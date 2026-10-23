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
    bool sol(TreeNode* r, TreeNode* s){
        if(r==nullptr)return s==nullptr;
        if(s==nullptr)return r==nullptr;
        if(r->val!=s->val)return false;
        return(sol(r->left,s->left)&&sol(r->right,s->right));
    }
    public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr)return false;
        if(root->val==subRoot->val){
            if(sol(root,subRoot))return true;
        }
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
        
    }
};
