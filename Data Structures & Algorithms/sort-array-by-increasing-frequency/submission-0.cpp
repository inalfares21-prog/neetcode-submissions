class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       
       map<int,int>mp;
       for(int i:nums){
        mp[i]++;
       }
    sort(nums.begin(), nums.end(), [&mp](int x, int y) {
    return (mp[x] < mp[y])||(mp[x]==mp[y]&&y<x);
});
return nums;


        
    }
};