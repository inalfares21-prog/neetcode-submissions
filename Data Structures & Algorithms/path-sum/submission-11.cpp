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
void sol(TreeNode* root,int count,int targetSum,bool&res){
    if(!root)return;
    if(!root->left&&!root->right){
        if(count+root->val==targetSum)res=true;
    }
    sol(root->left,count+root->val,targetSum,res);
    sol(root->right,count+root->val,targetSum,res);

}
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool res=false;
        sol(root,0,targetSum,res);
        return res;

        
    }
};