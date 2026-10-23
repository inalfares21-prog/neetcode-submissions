class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(char c:t){
            if(j==s.size())return true;
            if(c==s[j]){
                j++;
            }
        }
        return j==s.size();
        
    }
};