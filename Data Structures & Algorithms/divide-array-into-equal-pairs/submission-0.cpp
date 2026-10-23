class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>m;
        for(int i: nums){
            m[i]++;
            if(m[i]%2==0){
                count++;
            }
        }
        return count>=nums.size()/2;
        
    }
};