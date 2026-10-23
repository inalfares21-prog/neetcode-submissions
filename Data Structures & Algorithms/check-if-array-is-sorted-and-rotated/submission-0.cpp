class Solution {
public:
    bool check(vector<int>& nums) {
        int count=1;
        int res=0;
       
        for(int i=0;i<2*nums.size();i++){
            int a=(i+nums.size())%nums.size();
            int b=(i+nums.size()-1)%nums.size();

          
            if(nums[a]>=nums[b]){
                count++;
            }
            else{
                count=1;
            }
            res=max(res,count);
        }
       
        return res==nums.size();
        
    }
};