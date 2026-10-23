class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;
        int count=0;
        for(int i:nums){
            mp[i]++;
            if(mp[i]%2==0){
                count+=2;
            }
        }
        return count==nums.size();
        
    }
};