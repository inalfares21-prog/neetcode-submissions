class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int res=0;
        for(int i:nums){sum+=i;}
        map<int,int>mp;
        if(sum==k)res++;
        mp[sum-k]++;
        for(int j=0;j<nums.size()-1;j++){
            int i=nums[j];
            sum-=i;
            if(sum==k)res++;
            if(mp.count(sum)){
                res+=mp[sum];
            }
            mp[sum-k]++;
        }
        return res;
        
    }
};