class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        set<int>mp;
        for(int i:nums1){
            mp.insert(i);
        }
        for(int i:nums2){
            if(mp.count(i)){
                res.push_back(i);
                mp.erase(i);
            }
        }
        return res;
        
    }
};