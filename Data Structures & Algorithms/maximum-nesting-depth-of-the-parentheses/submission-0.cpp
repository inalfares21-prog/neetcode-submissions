class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        stack<char>k;
        for(char c:s){
            if(c=='('){
                k.push(c);
            }
             if(c==')'){
                k.pop();
            }
            int b=k.size();
            res=max(res,b);
        }
        return res;
        
    }
};