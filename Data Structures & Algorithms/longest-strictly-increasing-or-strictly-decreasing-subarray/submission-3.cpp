class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int a=1;
        int b=1;
        int res=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                a=1;
                b=1;
                continue;
            }
            if(nums[i]>nums[i-1]){
                b=1;
                a++;
            }
            else{
                a=1;
                b++;
            }
            res=max(res,max(a,b));
        }
        return res;
        
    }
};