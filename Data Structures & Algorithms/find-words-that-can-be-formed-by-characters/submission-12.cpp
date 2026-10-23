class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>mp;
        for(char c:chars){
            mp[c]++;
        }
        int res=0;
        for(string s:words){
            map<char,int>tmp=mp;
            res+=s.size();
            for(char c:s){
                tmp[c]--;
                if(tmp[c]<0){
                    res-=s.size();
                    break;
                }
            }
        }
        return res;
        
    }
};