class Solution {
public:
    int minimumRecolors(string b, int k) {
        int a=0;
        int res=0;
        int out=k;
        for(int i=0;i<k;i++){
            if(b[i]=='W')res++;
        }
        out =res;
        for(int i=k;i<b.size();i++){
            if(b[i]=='W')res++;
            if(b[i-k]=='W')res--;
            out=min(out ,res);
        }
        return out;
        
    }
};