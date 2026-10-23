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
    void sol(vector<int>&res,TreeNode* root){
        if(!root)return ;
        sol(res,root->left);
        res.push_back(root->val);
        sol(res,root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        sol(res,root);
        return res;
        
    }
};