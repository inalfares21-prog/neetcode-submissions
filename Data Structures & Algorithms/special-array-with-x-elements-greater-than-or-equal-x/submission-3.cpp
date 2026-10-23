class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int c=nums.size()-i;
            if(c<=nums[i]&&(i==0||c>nums[i-1]))return c;
        }
        return -1;
        
    }
};