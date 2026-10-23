class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int res=0;
        for(char c: chars){
            mp[c]++;
        }
        for(string s: words){
            unordered_map<char,int>m=mp;
            res=res+s.size();
            for(char c: s){
                
                if(!m.count(c)||m[c]<=0){
                    res=res-s.size();
                    break;
                }
                m[c]--;
             
            }

        }
        return res;
        
    }
};