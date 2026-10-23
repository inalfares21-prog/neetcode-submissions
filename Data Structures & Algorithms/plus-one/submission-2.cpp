class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int>res(d.size());
        int c=1;
        for(int i=d.size()-1;i>-1;i--){
            res[i]=(d[i]+c)%10;
            c=(d[i]+c)/10;
        }
        if(c==1){
            vector<int>tmp(res.size()+1);
            tmp[0]=1;
            return tmp;
        }
        return res;
        
    }
};
