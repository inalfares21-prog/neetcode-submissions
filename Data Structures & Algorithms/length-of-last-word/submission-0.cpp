class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0;
        while(s[s.size()-1]==' '){
        s.pop_back();
        }
        for(char c: s){
            if(c==' '){
                res=0;
            }
            else{
                res++;
            }
        }
        return res;
        
    }
};