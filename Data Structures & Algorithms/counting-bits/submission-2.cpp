class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        res[0]=0;
        int count=1;
        for(int i=1;i<n+1;i++){
            if(i==count){
                res[i]=1;
                count=count*2;
            }
            else{
                res[i]=res[i-count/2]+1;
            }
        }
        return res;
    }
};
