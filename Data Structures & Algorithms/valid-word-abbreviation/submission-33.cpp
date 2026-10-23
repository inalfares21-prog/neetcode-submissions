class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j=0;
        for(int i=0;i<abbr.size();i++){
            if(abbr[i]=='0')return false;
            int res=0;
            while(i<abbr.size()&&abbr[i]-'0'>-1&&abbr[i]-'0'<10){
                res=res*10+abbr[i]-'0';
                i++;
            }
            j+=res;
            if(j==word.size())return i==abbr.size();
            if(j>word.size())return false;
            if(word[j]!=abbr[i])return false;
            j++;
        }
        return true;
        
    }
};