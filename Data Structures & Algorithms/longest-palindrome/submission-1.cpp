class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        int count=0;
        int res=0;
        for(char c:s){
            m[c]++;
            if(m[c]%2==0){
                res+=2;
                count--;
            }
            else{
                count++;
            }

        }
        if(count>0)res+=1;
        return res;
        
    }
};