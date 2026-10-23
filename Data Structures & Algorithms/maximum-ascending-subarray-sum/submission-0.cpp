class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int curr =nums[0];
        int res=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                curr=curr+nums[i];
            }
            else{
                res=max(res,curr);
                curr=nums[i];
            }
        }
         res=max(res,curr);
         return res;

        
    }
};