class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m1;
        map<char,char>m2;
        if(t.size()!=s.size())return false;
        for(int i=0;i<s.size();i++){
            if(!m1.count(t[i])&&!m2.count(s[i])){
                m1[t[i]]=s[i];
                m2[s[i]]=t[i];
            }
            else{
                if(m1.count(t[i])&&m2.count(s[i])){
                    if(m1[t[i]]==s[i]&&m2[s[i]]==t[i])continue;
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        return true;
        
    }
};