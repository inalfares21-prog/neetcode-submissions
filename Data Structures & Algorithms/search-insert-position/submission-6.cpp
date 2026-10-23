class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j=0;
        for(int i:nums){
            if(i==target)return j;
            if(i>target){
                return j;
            }
            j++;
        }
        return j;
        
    }
};