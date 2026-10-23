class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool b=true;
        bool a=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                b=false;
            }
            if(nums[i-1]>nums[i]){
                a=false;
            }

        }
        return a||b;
        
    }
};