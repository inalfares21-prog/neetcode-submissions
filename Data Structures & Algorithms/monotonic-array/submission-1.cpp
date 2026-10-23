class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool a=true;

        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])a=false;
        }
        if(a)return true;
        a=true;
         for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1])a=false;
        }
        if(a)return true;
      return false;
        
    }
};