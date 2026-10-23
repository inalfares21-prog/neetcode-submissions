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
    int s(TreeNode* root,bool &res){
        if(root==nullptr)return 0;
        int l=s(root->left,res);
        int r=s(root->right,res);
        if(abs(l-r)>1)res=false;
        return max(l,r)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        bool res=true;
        s(root,res);
        return res;

        
        
    }
};
