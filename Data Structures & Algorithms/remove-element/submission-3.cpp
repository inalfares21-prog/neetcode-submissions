class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>res;
        int k=0;
        for(int i:nums){
            if(i!=val){
                res.push_back(i);
            }
            else{
                k++;
            }
        
        }
        nums=res;
        return res.size();
        
    }
};