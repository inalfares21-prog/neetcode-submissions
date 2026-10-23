class Solution {
public:
    bool check(vector<int>& nums) {
        int res=1;
        int ans=1;
        for(int i=1;i<nums.size()*2;i++){
            if(nums[i%nums.size()]>=nums[(i-1)%nums.size()])res++;
            else{
                res=1;
            }
            ans=max(res,ans);

        }
        return ans==nums.size();
        
    }
};