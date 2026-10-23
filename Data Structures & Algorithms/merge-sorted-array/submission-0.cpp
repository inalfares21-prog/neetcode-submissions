class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>res;
        for(int i=0;i<nums2.size();i++){
            nums1.pop_back();
        }
        int i=0;
        int j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]>nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                 res.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            res.push_back(nums1[i]);
            i++;
        }
           while(j<nums2.size()){
            res.push_back(nums2[j]);
            j++;
        }
       nums1=res;
       sort(nums1.begin(),nums1.end());
        
        
    }
};