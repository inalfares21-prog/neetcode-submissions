class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k=0;
        
        for(int i:nums){
            if(i==target)return k;
            k++;
        }
        return -1;
    }
};
