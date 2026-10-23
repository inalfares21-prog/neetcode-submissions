class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        int res=0;
        int count=0;
        for(char c:s){
            mp[c]++;
            if(mp[c]%2==0){
                res+=2;
                count--;
            }
            else{
                count++;
            }
        }
        if(count>0)res++;
        return res;
        
    }
};