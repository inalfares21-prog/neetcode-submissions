class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>k(allowed.begin(),allowed.end());
        int res=0;
        for(string s:words){
            res++;
            for(char c:s){
                if(!k.count(c)){
                    res--;
                    break;
                }
            }
        }
        return res;
        
    }
};