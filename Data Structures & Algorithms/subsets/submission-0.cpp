class Solution {
    void sol(vector<vector<int>>&s,vector<int>&nums,vector<int>&vec,int d){

        if(d==nums.size()){
            s.push_back(vec);
            return;
        }
        vec.push_back(nums[d]);
        sol(s,nums,vec,d+1);
        vec.pop_back();
        sol(s,nums,vec,d+1);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>s;
        vector<int>vec;
        sol(s,nums,vec,0);
        return s;
        
    }
};
