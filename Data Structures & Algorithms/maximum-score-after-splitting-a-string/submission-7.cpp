class Solution {
public:
    int maxScore(string s) {
        
        int a=0;
        int b=0;
        for(char c:s){
            if(c=='1'){
                a++;
            }
        }
        int res=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1')a--;
            else{
                b++;
            }
            res=max(res,a+b);
        }
        return res;
    }
};