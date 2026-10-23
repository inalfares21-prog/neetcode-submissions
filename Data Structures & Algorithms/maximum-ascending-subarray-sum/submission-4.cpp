class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res=nums[0];
        int count=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                count+=nums[i];
            }
            else{
                count=nums[i];
            }
            res=max(res,count);
        }
        return res;
        
    }
};