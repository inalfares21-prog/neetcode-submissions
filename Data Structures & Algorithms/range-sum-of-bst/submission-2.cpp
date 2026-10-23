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

    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)return 0;
        int l=0;
        int r=0;
        int k=0;
        if(root->val>=low){
            l=rangeSumBST(root->left,low,high);
        }
        if(root->val<=high){
            r=rangeSumBST(root->right,low,high);
        }
        if(root->val>=low&&root->val<=high)k=root->val;
        return k+l+r;
        
        
    }
};