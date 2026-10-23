class Solution {
public:
    bool check(vector<int>& nums) {
        int res=0;
        int k=1;
        int c=nums.size();
        for(int i=1 ;i<nums.size()*2;i++){
            if(nums[i%c]>=nums[(i-1)%c])k++;
            else{
                k=1;
            }
            res=max(res,k);
     }
     return res>=nums.size();
        
    }
};