class Solution {
public:
    int climbStairs(int n) {
        int prev=1;
        int cur=2;
        int count=3;
        if(n==2){
            return 2;
        }
        if(n==1){
            return 1;
        }
        while(count<n+1){
            cur=cur+prev;
            prev=cur-prev;
            count++;
        }
        return cur;
        
    }
};
