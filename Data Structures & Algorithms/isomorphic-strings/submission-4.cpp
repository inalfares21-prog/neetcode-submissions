class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,char>m;
        unordered_map<char,char>mp;
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])||m.count(t[i])){
                if(mp.count(s[i])&&!m.count(t[i])||!mp.count(s[i])&&m.count(t[i]))return false;
                if(mp[s[i]]!=t[i]||m[t[i]]!=s[i]){
                    return false;
                }
            }
            else{
                m[t[i]]=s[i];
                mp[s[i]]=t[i];
                
            }
            
        }
        return true;
        
    }
};