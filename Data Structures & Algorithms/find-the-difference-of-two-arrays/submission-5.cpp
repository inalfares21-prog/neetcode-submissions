class Solution {
public:

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>res(2);
        set<int>s(nums2.begin(),nums2.end());
        for(int i:nums1){
            if(!s.count(i))res[0].push_back(i);
            s.insert(i);
        }
         set<int>s1(nums1.begin(),nums1.end());
          for(int i:nums2){
            if(!s1.count(i))res[1].push_back(i);
            s1.insert(i);
        }
        return res;
        
    }
};