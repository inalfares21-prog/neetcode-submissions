class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int c=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                c+=nums[i];
            }
            else{
                c=nums[i];
            }
            res=max(res,c);
        }
        return res;
        
    }
};