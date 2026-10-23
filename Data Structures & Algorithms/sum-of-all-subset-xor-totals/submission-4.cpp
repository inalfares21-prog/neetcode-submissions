class Solution {
public:
void sol(int&res,int count,vector<int>&nums,int l){
    if(l>=nums.size()){
        res+=count;
        return ;
    }
        int c=count;
        count^=nums[l];
        sol(res,count,nums,l+1);
        count=c;
        sol(res,count,nums,l+1);
    
}
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        sol(res,0,nums,0);
        return res;
        
    }
};