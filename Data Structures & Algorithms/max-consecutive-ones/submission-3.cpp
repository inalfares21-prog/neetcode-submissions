class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;
        int c=0;
        for(int i: nums){
            c=max(c,res);
            if(i==1){
                res++;
            }
            else{
                res=0;
            }
        }
        c=max(c,res);
        return c;
        
    }
};