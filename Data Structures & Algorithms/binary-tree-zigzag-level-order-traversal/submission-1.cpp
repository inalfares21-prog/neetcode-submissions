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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>res;
        stack<int>s;
        int level=1;
        while(q.size()>0){
            int sz=q.size();
            vector<int>tmp;
            for(int i=0;i<sz;i++){
                TreeNode*p=q.front();
                q.pop();
                if(p->left)q.push(p->left);
                if(p->right)q.push(p->right);
                if(level%2==1){
                    if(p->left)s.push(p->left->val);
                    if(p->right)s.push(p->right->val);
                    tmp.push_back(p->val);
                }
                else{
                    tmp.push_back(s.top());
                    s.pop();
                }
            }
            level++;
            res.push_back(tmp);
        }
        return res;
    }
};