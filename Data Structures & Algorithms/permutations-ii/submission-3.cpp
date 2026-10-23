class Solution {
    void sol(vector<vector<int>>&res,vector<int>&nums,vector<int>&vec,vector<bool>&vis,int l){
        if(l==nums.size()){
            res.push_back(vec);
            return;
        }
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            if(!vis[i]&&!s.count(nums[i])){
                vec[l]=nums[i];
                vis[i]=true;
                sol(res,nums,vec,vis,l+1);
                vis[i]=false;
                s.insert(nums[i]);
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>vec(nums.size());
        vector<bool>vis(nums.size());
        sol(res,nums,vec,vis,0);
        return res;
        
    }
};