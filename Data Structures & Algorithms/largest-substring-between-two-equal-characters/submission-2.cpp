class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,int>mp;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(!mp.count(s[i]))mp[s[i]]=i;
            res=max(res,i-mp[s[i]]);
        }
        return res-1;
        
    }
};