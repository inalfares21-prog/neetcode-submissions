class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        vector<int>res;
        for(int i:s){
            res.push_back(i);
        }
        nums=res;
        return nums.size();
        
    }
};