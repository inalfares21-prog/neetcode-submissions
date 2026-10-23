class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<int>s(allowed.begin(),allowed.end());
        int res=0;
        for(string k:words){
            res++;
            for(char c:k){
                if(!s.count(c)){
                    res--;
                    break;
                }
            }
        }
        return res;
        
    }
};