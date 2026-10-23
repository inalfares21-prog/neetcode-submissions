class Solution {
public:
void sol(int count,int&res,vector<int>&nums,int i){
    if(i==nums.size()){
        res+=count;
        return;
    }
    int c=count;
    count=count^nums[i];
    i++;
    sol(count,res,nums,i);
    count=c;
   sol(count,res,nums,i);
}
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        sol(0,res,nums,0);
        return res;
        
    }
};