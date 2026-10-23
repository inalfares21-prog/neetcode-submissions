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
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode*k=root;
        TreeNode*prev=nullptr;
        while(root&&root->val!=key){
            if(root->val>key){
                prev=root;
                root=root->left;
                
            }
            else{
                prev=root;
                root=root->right;

            } 
        }
        if(!root)return k;
        if(!prev){
            TreeNode*tmp=root;
            if(root->left){
                k=root->left;
                root=root->left;
                while(root->right){
                    root=root->right;
                }
                root->right=tmp->right;
            }
            else{
                return root->right;
            }
            return k;
        }






        
        if(root->left){
            if(prev->val>key){
                prev->left=root->left;
            }
            else{
                prev->right=root->left;
            }
            if(root->right){
                TreeNode* p=root->left;
                
                while(p->right){
                    p=p->right;
                }
                p->right=root->right;
            }
        }
        else{
            if(prev->val>key){
                prev->left=root->right;
            }
            else{
                prev->right=root->right;
            }

        }
        return k;

        
        
    }
};