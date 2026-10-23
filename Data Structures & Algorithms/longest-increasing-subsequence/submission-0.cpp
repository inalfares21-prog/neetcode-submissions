class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int res=1;
       unordered_map<int,int>mp;
       mp[nums.size()-1]=1;
       for(int i=nums.size()-2;i>=0;i--){
        mp[i]=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    mp[i]=max(mp[i],mp[j]+1);
                }
            }
            res=max(res,mp[i]);
       }
       return res;
     
        
    }
};
