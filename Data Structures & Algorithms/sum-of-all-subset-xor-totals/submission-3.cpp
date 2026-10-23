class Solution {
public:
void sol(int &res,vector<int>&nums,int sum,int l){
    if(l==nums.size()){res+=sum;return ;}
    int c=sum;
    sum=sum^nums[l];
    sol(res,nums,sum,l+1);
    sum=c;
    sol(res,nums,sum,l+1);


   

}
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        sol(res,nums,0,0);
        return res;
        
    }
};