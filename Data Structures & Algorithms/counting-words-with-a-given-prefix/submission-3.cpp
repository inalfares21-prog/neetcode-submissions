class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res=0;
        for(string s:words){
            if(s.size()<pref.size())continue;
            res++;
            for(int j=0;j<pref.size();j++){
                if(pref[j]!=s[j]){
                    res--;
                    break;
                }
            }
        }
        return res;
        
    }
};