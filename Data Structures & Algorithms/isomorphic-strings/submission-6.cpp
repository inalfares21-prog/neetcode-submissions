class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        map<char,char>m;

        for(int i=0;i<t.size();i++){
            if(!mp.count(s[i])&&!m.count(t[i])){
                mp[s[i]]=t[i];
                m[t[i]]=s[i];
            }
            else{
                if(mp[s[i]]==t[i]&&m[t[i]]==s[i])continue;
                else{
                    return false;
                }
            }
        }
        return true;
    }
};