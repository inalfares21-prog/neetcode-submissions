class Solution {
public:
    int minimumRecolors(string b, int k) {
        int res=0;
        for(int i=0;i<k;i++){
            if(b[i]=='W')res++;
        }
        int ans=res;
        for(int i=k;i<b.size();i++){
            if(b[i]=='W')res++;
            if(b[i-k]=='W')res--;
            ans=min(ans,res);
        }
        return ans;
       
        
    }
};