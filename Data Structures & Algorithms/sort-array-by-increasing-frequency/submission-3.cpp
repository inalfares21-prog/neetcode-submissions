class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        sort(nums.begin(),nums.end(),[&mp](int a,int b){
            return mp[a]<mp[b]||(mp[a]==mp[b]&&a>b);
        });
        return nums;
        
    }
};