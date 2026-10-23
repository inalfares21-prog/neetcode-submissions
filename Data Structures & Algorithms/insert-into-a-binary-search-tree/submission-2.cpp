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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode*p=new TreeNode(val);
            return p;
        }
        TreeNode*r=root;
        while(true){
            if(r->val>val){
                if(!r->left){
                    TreeNode*p=new TreeNode(val);
                    r->left=p;
                    break;
                }
                r=r->left;
            }
            else{
                if(!r->right){
                    TreeNode*p=new TreeNode(val);
                    r->right=p;
                    break;
                }
                r=r->right;
            }
        }
        return root;
        
    }
};