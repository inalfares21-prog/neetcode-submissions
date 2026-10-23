class Solution {
    void sol(vector<int>& nums,int i,int &res,int count){
        if (i==nums.size()){
            res+=count;
            return;
        }
       int c=count;
       count^=nums[i];
       sol(nums ,i+1,res,count);
       sol(nums ,i+1,res,c);


    }
public:
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        sol(nums,0,res,0);
        return res;
        
    }
};