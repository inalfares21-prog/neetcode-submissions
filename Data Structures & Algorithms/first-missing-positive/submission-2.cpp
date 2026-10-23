class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=0;
            }
        }
        for(int i:nums){
            if(abs(i)-1<nums.size()&&abs(i)>0){
                if(nums[abs(i)-1]>0){
                    nums[abs(i)-1]=-nums[abs(i)-1];
                }
                if(nums[abs(i)-1]==0)nums[abs(i)-1]=-nums.size()-1;
            }
        }
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)res++;
            else{break;}
        }
        return res+1;
    }
};