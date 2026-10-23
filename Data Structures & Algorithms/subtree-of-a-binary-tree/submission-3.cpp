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
    bool sol(TreeNode* root, TreeNode* subRoot){
        if(root==nullptr)return subRoot==nullptr;
        if(subRoot==nullptr)return false;
        if(root->val!=subRoot->val)return false;
        return sol(root->left,subRoot->left)&&sol(root->right,subRoot->right);
    }
    void t(TreeNode* root, TreeNode* subRoot,bool &a){
        if(root==nullptr)return;
        if(root->val==subRoot->val){
            a=a||sol(root,subRoot);
        }
        t(root->left,subRoot,a);
        t(root->right,subRoot,a);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool a=false;
        t(root,subRoot,a);
        return a;

        
    }
};
