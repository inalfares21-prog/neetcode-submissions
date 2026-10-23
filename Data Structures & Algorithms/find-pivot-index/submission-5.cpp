class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        
        int count=0;
        int j=0;
        for(int i:nums){
            sum-=i;
            
            
            if(sum==count)return j;
            count+=i;
            j++;
        }
        return -1;
        
    }
};