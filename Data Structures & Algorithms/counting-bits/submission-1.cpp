class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        res[0]=0;
        if(n==0)return res;
        res[1]=1;
        if(n==1)return res;
        int a=1;
        for(int i=2;i<n+1;i++){
            if(i==2*a){
                a=i;
                res[i]=1;
                
            }
            else{
                res[i]=1+res[i-a];
            }


        }
        return res;
        
    }
};
