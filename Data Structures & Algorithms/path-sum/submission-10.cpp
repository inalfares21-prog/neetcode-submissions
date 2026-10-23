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
bool sol(int res,TreeNode* root, int targetSum){
    if(!root)return false;
    if(root->left==nullptr&&root->right==nullptr)return res+root->val==targetSum;
    res+=root->val;
    return sol(res,root->left,targetSum)||sol(res,root->right,targetSum);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        return sol(0,root,targetSum);
        
    }
};