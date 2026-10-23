class Solution {
public:
    int arrangeCoins(int n) {
        int x=n;
        for(int i=1;i<x;i++){
            n-=i;
            if(n<0)return i-1;
        }
    }
};