class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int res=1;
       const int s=nums.size();
       vector<int>mp(s);
       mp[s-1]=1;
       for(int i=s-2;i>=0;i--){
        mp[i]=1;
            for(int j=i+1;j<s;j++){
                if(nums[j]>nums[i]){
                    mp[i]=max(mp[i],mp[j]+1);
                }
            }
            res=max(res,mp[i]);
       }
       return res;
     
        
    }
};
