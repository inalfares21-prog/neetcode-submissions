class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int r=nums.size()-1;
        int m;
        while(l<r){
            m=(l+r)/2;
            if(nums[m]>=nums[0]){
                l=m+1;
            }
            else{
                r=m;
            }
        } 
        if(nums[l]<nums[0])return nums[l];
        return nums[0];

        
    }
};
