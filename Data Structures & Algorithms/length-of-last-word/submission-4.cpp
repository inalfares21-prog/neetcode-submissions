class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0;
        int j=s.size()-1;
        while(s[j]==' '){
            s.pop_back();
            j--;
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