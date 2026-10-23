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
    bool isCompleteTree(TreeNode* root) {
        TreeNode*p=root;
        int depth=0;
        while(p->left){p=p->left;depth++;}
        queue<TreeNode*>q;
        q.push(root);
        for(int i=0;i<depth;i++){
            int s=q.size();
            for(int j=0;j<s;j++){
                TreeNode*a=q.front();
                q.pop();
                if(!a)return false;
                q.push(a->left);
                q.push(a->right);
            }
        }
        bool last=false;
        cout<<q.size();
        while(q.size()>0){
            if(q.front()&&(last||q.front()->left||q.front()->right))return false;
            if(!q.front())last=true;
            q.pop();
        }
        return true;
        
      
        
    }
};