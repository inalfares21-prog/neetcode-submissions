class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i: nums){
            mp[i]++;
            if(mp[i]>nums.size()/2)return i;
        }
        
    }
};