class Solution {
public:
    bool check(vector<int>& nums) {
        int res=1;
        int count=1;
        for(int i=0;i<nums.size()*2;i++){
            if(nums[i%nums.size()]>=nums[(i-1)%nums.size()])count++;
            else{
                count=1;
            }
            res=max(res,count);
        }
        cout<<res;
        return res>=nums.size();
        
    }
};