class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool a=true;
        for(int i:nums){
            if(i<0)a=!a;
            if(i==0)return 0;
        }
        if(a)return 1;
        return -1;
        
    }
};