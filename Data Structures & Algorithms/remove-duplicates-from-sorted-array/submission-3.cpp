class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>res;
        set<int>s;
        for(int i:nums){
            if(!s.count(i))res.push_back(i);
            s.insert(i);
        }
        nums=res;
        return res.size();
    }
};