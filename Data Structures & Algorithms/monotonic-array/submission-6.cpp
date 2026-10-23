class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int a=1;
        int b=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                a++;
                b++;
                continue;
            }
            if(nums[i]>nums[i-1]){
                a=1;
                b++;
            }
            else{
                b=1;
                a++;
            }
        }
        return max(a,b)==nums.size();
        
    }
};