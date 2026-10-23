class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0;
        int i=s.size()-1;
         while(s[i]==' '){
            s.pop_back();
            i--;
         }
        for(char c:s){
            
            if(c==' ')res=0;
            else{
                res++;
            }
        }
        return res;
        
    }
};