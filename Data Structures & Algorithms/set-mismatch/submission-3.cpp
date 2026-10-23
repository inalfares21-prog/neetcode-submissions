class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int>s;
        vector<int>res;
        for(int i:nums){
            if(s.count(i))res.push_back(i);
            s.insert(i);
        }
        for(int i=1;i<nums.size()+1;i++){
            if(!s.count(i))res.push_back(i);
        }
        return res;
        
    }
};