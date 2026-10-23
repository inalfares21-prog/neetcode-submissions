class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i:nums){
            m[i]++;
            if(m[i]>nums.size()/2){
                return i;
            }
        }

        
    }
};