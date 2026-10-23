class Solution { 
public:
    int rob(vector<int>& nums) {
        int i;
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        if(nums.size()==1){
            return nums[0];
        }
        
        nums[2]=nums[0]+nums[2];
        
        for( i=3;i<nums.size();i++){
            nums[i]=nums[i]+max(nums[i-2],nums[i-3]);

        }
        return max(nums[i-1],nums[i-2]);
        
    }
};
