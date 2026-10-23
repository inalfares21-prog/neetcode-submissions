class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mp;
        map<string,char>m;
        int j=0;
        for(char c:pattern){
            string tmp;
            if(j>s.size()-1)return false;
            while(j<s.size()&&s[j]!=' '){
                tmp.push_back(s[j]);
                j++;
            }
            j++;
            if(!mp.count(c)&&!m.count(tmp)){
                mp[c]=tmp;
                m[tmp]=c;
            }
            if(mp[c]!=tmp||m[tmp]!=c)return false;

        }
        return j>s.size()-1;
        
    }
};