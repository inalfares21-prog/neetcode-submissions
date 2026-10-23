class Solution {
public:
    int arraySign(vector<int>& nums) {
        int a=true;
        bool c=false;
        for(int i:nums){
            if(i==0)c=true;
            if(i<0)a=!a;
        }
        if(c)return 0;
        if(a)return 1;
        return -1;
    }
};