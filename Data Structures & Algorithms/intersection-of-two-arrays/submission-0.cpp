class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_set<int> s;
        for(int i=0;i<nums2.size();i++){
            
            s.insert(nums2[i]);
        }
         for(int i=0;i<nums1.size();i++){
            if(s.contains(nums1[i])){
                res.push_back(nums1[i]);
                cout<<nums1[i];
                s.erase(nums1[i]);

            }  
        }
        return res;
       
       
    }
};