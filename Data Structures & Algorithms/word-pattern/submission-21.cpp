class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mp1;
        map<string,char>mp2;
        int i=0;
        for(char c:pattern){
            string tmp;
            if(i>=s.size())return false;
            while(i<s.size()&&s[i]!=' '){
                tmp.push_back(s[i]);
                i++;
            }
            i++;
            if(!mp1.count(c)&&!mp2.count(tmp)){
                mp1[c]=tmp;
                mp2[tmp]=c;
            }
            else{
                if(mp1[c]!=tmp||mp2[tmp]!=c)return false;
            }
        }
        return i>=s.size();

        
    }
};