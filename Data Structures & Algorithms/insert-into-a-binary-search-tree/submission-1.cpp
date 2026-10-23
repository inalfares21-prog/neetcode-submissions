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
void sol(TreeNode* root, int val){
    
    
    if(root->val>val){
        if(!root->left){
            TreeNode*p=new TreeNode(val);
            root->left=p;
            return;
        }
        sol(root->left,val);
    }
    else{
        if(!root->right){
            TreeNode*p=new TreeNode(val);
            root->right=p;
            return;
        }
        sol(root->right,val);
    }
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode*p=new TreeNode(val);
            return p;
        }
        sol(root,val);
        return root;
        
    }
};