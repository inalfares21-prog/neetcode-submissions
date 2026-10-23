class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        
     int c=1;
     for(int i=d.size()-1;i>-1;i--){
        int t=d[i];
        d[i]=(d[i]+c)%10;
        c=(t+c)/10;
     }
     if(c==1){
        vector<int>res(d.size()+1);
        res[0]=1;
        return res;
     }
     return d;
    }
};
