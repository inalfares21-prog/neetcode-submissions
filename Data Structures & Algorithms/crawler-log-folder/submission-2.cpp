class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res=0;
        for(string s:logs){
            if(s=="../"){
                res=max(res-1,0);
                continue;
            }
            if(s=="./"){
                continue;
            }
            res++;
        }
        return res;
        
    }
};