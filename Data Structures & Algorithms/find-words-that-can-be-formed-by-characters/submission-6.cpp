class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>m;
        int res=0;
        for(char c:chars){
            m[c]++;
        }
        for(string s:words){
            map<char,int>mp=m;
            res+=s.size();
            for(char c:s){
                mp[c]--;
                if(mp[c]<0){
                    res-=s.size();
                    break;
                }
            }
        }
        return res;
        
    }
};