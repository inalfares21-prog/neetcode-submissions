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
private :
void sol(TreeNode * a){

    TreeNode * temp;
    if(a==nullptr) {
        return;
    }
    temp=a->left;
    a->left=a->right;
    a->right=temp;
    sol(a->right);
    sol(a->left);

}
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root==nullptr ){
            return root;
        }
        sol(root);
        return root;
        
    }
};
