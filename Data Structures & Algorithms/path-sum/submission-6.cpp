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
bool sol(TreeNode* root, int t,int res){
    if(root==nullptr)return false;
    if(!root->left&&!root->right){return res+root->val==t;}
    return sol(root->left,t,res+root->val)||sol(root->right,t,res+root->val);
}
    bool hasPathSum(TreeNode* root, int t) {
        return sol(root,t,0);
        
    }
};