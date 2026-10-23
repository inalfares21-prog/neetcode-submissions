class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res=1;
        int a=1;
        int b=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                a=1;
                b=1;
                continue;
            }
            if(nums[i]>nums[i-1]){
                a++;
                b=1;
            }
            else{
                b++;
                a=1;
            }
            res=max(res,max(a,b));
        }
        return res;
        
    }
};