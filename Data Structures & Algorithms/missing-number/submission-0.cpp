class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=0;
        for(int x:nums){
            res=res^x;
        }
        for(int i=1;i<nums.size()+1;i++){
            res=res^i;
        }
        return res;
        
    }
};
