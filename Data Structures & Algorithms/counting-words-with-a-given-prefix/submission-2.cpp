class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res=0;
        for(string s: words){
            res++;
            if(pref.size()>s.size()){res--;break;}
            for(int i=0;i<pref.size();i++){
                if(s[i]!=pref[i]){
                    res--;
                    break;
                }

            }
        }
        return res;
        
    }
};