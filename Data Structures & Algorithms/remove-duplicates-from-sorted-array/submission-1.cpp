class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>res;
        set<int>s;
      
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(!s.count(nums[i])){
                res.push_back(nums[i]);
                s.insert(nums[i]);

            }
        }
        nums=res;
        return nums.size();
        
    }
};