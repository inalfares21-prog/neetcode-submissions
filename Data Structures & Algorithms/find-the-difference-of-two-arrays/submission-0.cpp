class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>res;
        vector<int>v1;
        vector<int>v2;


        unordered_set<int>s1;
        unordered_set<int>s2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
         for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(!s2.count(nums1[i])){
                v1.push_back(nums1[i]);
                s2.insert(nums1[i]);
            }
        }
        res.push_back(v1);
         for(int i=0;i<nums2.size();i++){
            if(!s1.count(nums2[i])){
                v2.push_back(nums2[i]);
                s1.insert(nums2[i]);
            }
        }
        res.push_back(v2);
        return res;



        
    }
};