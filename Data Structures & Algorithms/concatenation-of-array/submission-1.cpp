class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>res(nums.size()*2);
        for(int i=0;i<2*nums.size();i++){
            res[i]=nums[i%nums.size()];
        }
        return res;
        
    }
};