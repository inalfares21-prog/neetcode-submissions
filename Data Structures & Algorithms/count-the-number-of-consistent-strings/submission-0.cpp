class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res=0;
        set<char>u(allowed.begin(),allowed.end());
        for(string s:words){
            res++;
            for(char c:s){
                if(!u.count(c)){
                    res--;
                    break;
                }
            }
        }
        return res;
        
    }
};