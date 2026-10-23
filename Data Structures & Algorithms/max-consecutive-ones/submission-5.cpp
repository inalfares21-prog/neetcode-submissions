class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int r=0;
        for(int i:nums){
            if(i==1){c++;}
            else{
                c=0;
            }
            r=max(r,c);
        }
        return r;
        
    }
};