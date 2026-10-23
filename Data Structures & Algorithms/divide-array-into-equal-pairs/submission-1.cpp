class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;
        int res=0;
        for(int i:nums){
            mp[i]++;
            if(mp[i]%2==0)res+=2;

        }
        return res==nums.size();
        
    }
};