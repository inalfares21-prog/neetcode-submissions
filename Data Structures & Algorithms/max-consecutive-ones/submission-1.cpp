class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int res=0;
        for(int x:nums){
            if(x==1){
                count++;
            }
            else{
                res=max(res, count);
                count=0;
            }
        }
        res=max(res, count);

        return res;
        
    }
};