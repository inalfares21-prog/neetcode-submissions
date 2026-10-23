class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>res;
        for(int i:nums){
            if(i!=0){
            res.push_back(i);
            }
        }
        while(res.size()<nums.size()){
            res.push_back(0);
        }
        nums=res;
        
    }
};