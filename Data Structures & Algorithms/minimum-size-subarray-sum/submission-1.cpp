class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=nums.size()+1;
        int sum=0;
        int j=0;
        int i=0;
        while(j<nums.size()){
            if(sum<target){
                sum+=nums[j];
                j++;
                continue;
            }
            if(sum>=target){
                res=min(res,j-i);
                sum-=nums[i];
                i++;
            }
        }
        while(sum>=target){
            sum-=nums[i];
            i++;
        }
        res=min(res,j-i+1);
        if(res==nums.size()+1)return 0;
        return res;
        
    }
};