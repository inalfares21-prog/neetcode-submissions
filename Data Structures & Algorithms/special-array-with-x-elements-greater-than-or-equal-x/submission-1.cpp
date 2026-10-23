class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums.size()-i<=nums[i]&&(i==0||nums.size()-i>nums[i-1]))return nums.size()-i;
        }
        return -1;
        
    }
};