class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        set<int>s(nums.begin(),nums.end());
        for(int i=1;i<nums.size()+1;i++){
            if(!s.count(i)){
                res.push_back(i);
            }
        }
        return res;
        
    }
};