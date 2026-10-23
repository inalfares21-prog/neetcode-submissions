class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        for(char c:t){
            if(i==s.size())return true;
            if(c==s[i]){i++;}
        }
        return i==s.size();
        
    }
};