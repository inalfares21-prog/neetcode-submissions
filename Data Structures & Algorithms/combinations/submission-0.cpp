class Solution {
    void sol(vector<vector<int>>&res,vector<int>&vec,int p,int q,int n,int k){
        if(q==k){
            res.push_back(vec);
            return;
        }
        for(int i=p;i<n+1;i++){
            vec[q]=i;
            sol(res,vec,i+1,q+1,n,k);
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>vec(k);
        sol(res,vec,1,0,n,k);
        return res;
        
    }
};