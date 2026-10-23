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

class Codec {
    void sol(string& s,TreeNode* root){
        if(root==nullptr){
            s.push_back('N');
            s.push_back('-');
            return;
        }
        string t=to_string(root->val);
        s+=t;
        s.push_back('-');
        sol(s,root->left);
        sol(s,root->right);
    }
    TreeNode* sol1(string& s,int &i){
        if(s[i]=='N'){
            i++;
            i++;
            return nullptr;
        }
        
        string tmp;
        while(i<s.size()&&s[i]!='-'){
            tmp.push_back(s[i]);
            i++;
        }
        i++;
        int a=stoi(tmp);
        TreeNode*root=new TreeNode;
        root->val=a;
        if(i<s.size()){
        root->left=sol1(s,i);
        root->right=sol1(s,i);
        }
        return root;


       
      

    }
    
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s; 
        sol(s,root);
        return s;

        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int i=0;
        return sol1(data,i);

       
        
        
    }
};
