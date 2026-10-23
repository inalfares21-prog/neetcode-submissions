class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int j=0;
        map<char,string>mp;
        map<string,char>m;
        for(char c:pattern){
            string tmp;
            if(j>s.size())return false;
            while(j<s.size()&&s[j]!=' '){
                tmp.push_back(s[j]);
                j++;
            }
            j++;
            if(!mp.count(c)&&!m.count(tmp)){
                mp[c]=tmp;
                m[tmp]=c;
            }
            else{
                if(mp[c]==tmp&&m[tmp]==c){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return j>s.size()-1;
        
    }
};