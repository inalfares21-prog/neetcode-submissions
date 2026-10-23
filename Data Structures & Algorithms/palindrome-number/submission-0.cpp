class Solution {
public:
    bool isPalindrome(int x) {
        int res=0;
        int n=x;
        while(n>0){
            res=res*10+n%10;
            n=n/10;
        }
        return res==x;
        
        
    }
};