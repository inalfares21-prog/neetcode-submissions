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
    TreeNode* sol( vector<int>& preorder, vector<int>& inorder,int &i,int &j,bool l,int prev){
        if(i>preorder.size()-1||j>inorder.size()-1)return nullptr;
        if(!l&&prev==inorder[j]){
            j++;
            return nullptr;
        }
        TreeNode*root=new TreeNode;
        root->val=preorder[i];
        if(preorder[i]==inorder[j]){
            root->left=nullptr;
            i++;
            j++;
            root->right =sol(preorder,inorder,i,j,false,prev);
            return root;
        }
        i++;
        root->left=sol(preorder,inorder,i,j,true,root->val);
        root->right =sol(preorder,inorder,i,j,false,prev);
        return root;
        
        
       


        

    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i=0;
        int j=0;
        return sol(preorder,inorder,i,j,true,1001);
      

        

        
    }
};
