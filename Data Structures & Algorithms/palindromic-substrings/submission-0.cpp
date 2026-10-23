class Solution {
public:
    int countSubstrings(string s) {
        int res=0;
        int l;
        int r; 
        for(int i=0;i<s.size();i++){
            l=i;
            r=i;
            while(l>-1&&r<s.size()){
                if(s[l]!=s[r]){
                    break;
                }
                res++;
                l--;
                r++;
            }
            l=i-1;
            r=i;
             while(l>-1&&r<s.size()){
                if(s[l]!=s[r]){
                    break;
                }
                res++;
                l--;
                r++;
            }


        }
        return res;

        
    }
};
