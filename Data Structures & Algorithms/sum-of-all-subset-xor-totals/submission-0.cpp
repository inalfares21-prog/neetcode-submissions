class Solution {
    void sol(vector<int>& nums,int &res,int sum,int i){
        if(i==nums.size()){
            res=res+sum;
            return ;
        }
        int prev=sum;
        sum=sum^nums[i];
        sol(nums,res,sum,i+1);
        sum=prev;
        sol(nums,res,sum,i+1);
    
    }
public:
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        sol(nums,res,0,0);
        return res;
        
    }
};