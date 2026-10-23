class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s(nums2.begin(),nums2.end());
        vector<int>res;
        for(int i:nums1){
            if(s.count(i))res.push_back(i);
            s.erase((i));
        }
        return res;
    }
};