class Solution {
    void sol(vector<int>& nums,int l,int&res,int count){
        if(l==nums.size()){res+=count;return ;}
        int c=count;
        count^=nums[l];
        sol(nums,l+1,res,count);
        count=c;
        sol(nums,l+1,res,count);
    }
public:
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        sol(nums,0,res,0);
        return res;
        
    }
};