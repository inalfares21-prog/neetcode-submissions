class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int res=nums[0];
        int count=0;
        int sum=0;
        for(int i:nums){
            count+=i;
            res=max(res,count);
            if(count<0)count=0;
            sum+=i;
        }
        int tmp=0;
        count=0;
        for(int i:nums){
            count+=i;
            if(count>0)count=0;
           tmp=min(tmp,count);
        }
        if(tmp==sum)return res;
        res=max(res,sum-tmp);
        return res;
        
        
    }
};