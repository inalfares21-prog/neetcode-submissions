class Solution {
public:
    int lengthOfLastWord(string s) {
        
        while(s[s.size()-1]==' '){
            s.pop_back();
        }
        int res=0;
        for(char c:s){
            if(c==' ')res=0;
            else{
                res++;
            }
        }
        return res;
    }
};