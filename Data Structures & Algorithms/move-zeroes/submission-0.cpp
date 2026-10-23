class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>res;
        for(int x:nums){
            if(x!=0){
                res.push_back(x);
            }
        }
            for(int i=res.size();i<nums.size();i++){
                res.push_back(0);
            }
        nums=res;
    

        
    }
};