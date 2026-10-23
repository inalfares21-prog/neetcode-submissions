class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>mp;
        int res=0;
        for(char c:chars){
            mp[c]++;
        }
        for(string s:words){
            map<char,int>tmp=mp;
            res+=s.size();
            for(char c:s){
                tmp[c]--;
                if(tmp[c]<0){res-=s.size();break;}
            }
        }
        return res;
        
    }
};