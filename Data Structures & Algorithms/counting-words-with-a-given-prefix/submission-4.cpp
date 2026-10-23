class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res=0;
        for(string s:words){
           
            res++;
            if(s.size()<pref.size()){res--;continue;}
            for(int i=0;i<pref.size();i++){
                if(pref[i]!=s[i]){
                    res--;
                    break;
                }
            }
        }
        return res;
        
    }
};