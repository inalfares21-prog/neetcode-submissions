class Solution {
public:
    int maxScore(string s) {
        int r=0;
        for(char c:s){
            if(c=='1')r++;
        }
        int l=0;
        if(s[0]=='0')l++;
        else{
            r--;
        }
        int res=l+r;
        for(int i=1;i<s.size()-1;i++){
            char c=s[i];
            if(c=='1')r--;
            else{
                l++;
            }
            res=max(res,l+r);
        }

        
        return res;
        
    }
};