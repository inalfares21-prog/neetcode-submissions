class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0)return 0;
        for(int i=1;i<n;i++){
            n-=i;
            if(n<0)return i-1;
        }
        
    }
};