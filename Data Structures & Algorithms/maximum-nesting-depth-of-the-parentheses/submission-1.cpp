class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int count=0;
        for(char c:s){
            if(c=='(')count++;
            if(c==')')count--;
            res=max(res,count);
        }
        return res;
        
    }
};