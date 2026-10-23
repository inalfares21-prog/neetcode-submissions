class Solution {
public:
    int search(vector<int>& nums, int target) {
        int j=0;
        for(int i:nums){
            if(i==target)return j;
            j++;
        }
        return -1;
        
    }
};
