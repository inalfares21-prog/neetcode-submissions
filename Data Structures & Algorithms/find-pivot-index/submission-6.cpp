class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=0;
        int r=0;
        for(int i:nums){
            r+=i;
        }
        int j=0;
       for(int i:nums){
        r-=i;
        if(l==r)return j;
        l+=i;
        j++;
       }
       return -1;
        
    }
};