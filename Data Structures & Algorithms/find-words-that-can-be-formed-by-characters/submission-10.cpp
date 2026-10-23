class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>mp;
        for(char c:chars){
            mp[c]++;

        }
        int res=0;
        for(string s:words ){
            res+=s.size();
            map<char,int>m=mp;
            for(char c:s){
                m[c]--;
                if(m[c]<0){res-=s.size();break;}
            }
        }
        return res;
        
    }
};