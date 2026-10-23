class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        set<int>s(nums2.begin(),nums2.end());
        set<int>used;
        for(int i:nums1){
            if(s.count(i)&&!used.count(i))res.push_back(i);
            used.insert(i);
        }
        return res;
        
    }
};