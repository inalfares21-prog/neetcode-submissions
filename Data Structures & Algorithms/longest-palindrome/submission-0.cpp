class Solution {
public:
    int longestPalindrome(
        string s) {
        int res=0;
        int count=0;
        unordered_map<char,int>mp;
        for(char c: s){
            mp[c]++;
            if(mp[c]%2==0){res=res+2;count--;}
            else{
                count++;
            }
        }
        if (count>0){
            res++;
        }
        return res;
        
    }
};