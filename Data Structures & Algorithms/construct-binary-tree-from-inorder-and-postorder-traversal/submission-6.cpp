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
    TreeNode*sol(vector<int>& inorder, vector<int>& postorder,int& i,int &j,int prev){
        if(j<0)return nullptr;
        TreeNode*root=new TreeNode(postorder[j]);
        j--;
        if(i==0)return root;
        
        if(postorder[j+1]!=inorder[i]){root->right=sol(inorder,postorder,i,j,root->val);}
        i--;
        if(prev==-1||inorder[i]!=prev){
            root->left= sol(inorder,postorder,i,j,prev);
        }
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i=inorder.size()-1;
        int j=inorder.size()-1;
        return sol(inorder,postorder,i,j,-1);
        
    }
};