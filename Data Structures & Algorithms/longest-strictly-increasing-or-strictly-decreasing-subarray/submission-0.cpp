class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size()==1)return 1;
        int size=1;
        int res=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=nums[i-1]){
                res=max(res,size);
                size=1;  
            }
            else{
                size++;   
            }

        }
        res=max(res,size);
        size=1;
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]<=nums[i-1]){
                res=max(res,size);
                size=1;   
            }
            else{
                size++;
            }
            res=max(res,size);

        }
        return res;
        
    }
};