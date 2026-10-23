class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        map<char,char>m;
        for(int i=0;i<t.size();i++){
            if(!mp.count(t[i])&&!m.count(s[i])){
                mp[t[i]]=s[i];
                m[s[i]]=t[i];
            }
            else{
            if(mp[t[i]]!=s[i]||m[s[i]]!=t[i])return false;
            }
        }
        return true;
        
        
    }
};