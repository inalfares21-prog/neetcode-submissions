class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res=0;
        set<char>a(allowed.begin(),allowed.end());
        for(string s:words){
            res++;
            for(char c:s){
                if(!a.count(c)){
                    res--;
                    break;
                }
            }

        }
        return res;

        
    }
};