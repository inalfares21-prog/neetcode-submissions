class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>res(2);
        set<int>s;
        for(int i:nums){
            if(s.count(i))res[0]=i;
            s.insert(i);
        }
        for(int i=1;i<nums.size()+1;i++){
            if(!s.count(i))res[1]=i;
        }
        return res;
        
    }
};