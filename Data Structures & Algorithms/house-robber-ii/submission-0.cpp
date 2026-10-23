class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==2)return max(nums[1],nums[0]);
        if(nums.size()==1)return nums[0];
        vector<int>path(nums.size());
        path[0]=nums[0];
        path[1]=nums[1];
        path[2]=nums[2]+nums[0];
        vector<int>altpath(nums.size());
        altpath[0]=0;
        altpath[1]=nums[1];
        altpath[2]=nums[2];
        for(int i=3;i<nums.size();i++){
            path[i]=max(path[i-2],path[i-3])+nums[i];
            altpath[i]=max(altpath[i-2],altpath[i-3])+nums[i];
        }
        return max(max(altpath[nums.size()-1],altpath[nums.size()-2]),max(path[nums.size()-2],path[nums.size()-3]));




        
    }
};
