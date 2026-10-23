class Solution {
public:
    int minimumRecolors(string b, int k) {
        int count=0;
        int res;
        for(int i=0;i<k;i++){
            if(b[i]=='W'){
                count++;
            }
        }
        res=count;
        for(int i=k;i<b.size();i++){
            if(b[i]=='W'){
                count++;
            }
            if(b[i-k]=='W')count--;
            res=min(res,count);
        }
        return res;
        
    }
};