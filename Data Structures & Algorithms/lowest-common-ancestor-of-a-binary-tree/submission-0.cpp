/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
int sol(TreeNode* root, TreeNode* p, TreeNode* q,TreeNode* &ans){
    if(!root)return 0;
    int res=0;
    if(root==p)res++;
    if(root==q)res++;
    res+=sol(root->left,p,q,ans)+sol(root->right,p,q,ans);
    if(res==2&&!ans)ans=root;
    return res;

}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*ans=nullptr;
        sol(root,p,q,ans);
        return ans;

        
    }
};