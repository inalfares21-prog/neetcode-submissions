class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int a=1;
        int b=1;
        int res=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){a++;b++;continue;}

            if(nums[i]>nums[i-1]){
                a++;
            }
            else{
                b++;
            }
        }
        return max(a,b)==nums.size();
        
    }
};