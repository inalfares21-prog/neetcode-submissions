class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2
    ) {
        vector<int>res;
        set<int>s(nums1.begin(),nums1.end());
        set<int>used;
        for(int i:nums2){
            if(s.count(i)&&!used.count(i))res.push_back(i);
            used.insert(i);
        }
        return res;
        
    }
};