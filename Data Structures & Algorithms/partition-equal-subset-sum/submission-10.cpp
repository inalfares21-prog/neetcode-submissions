class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        if(sum%2==1)return false;
        sum=sum/2;
        vector<pair<bool,int>>dp(sum+1);
        dp[0]={true,-1};
        for(int i=0;i<sum+1;i++){
            for(int j=nums.size()-1;j>-1;j--){
                if(i-nums[j]>=0&&dp[i-nums[j]].first&&j>dp[i-nums[j]].second){
                    dp[i].first=true;
                    dp[i].second=j;
                }
            }
        }
        return dp[sum].first;
        
    }
};
