class Solution {
public:
    double myPow(double x, int n) {
        bool negative =false;
        if(n==0)return 1;
        if(n<0){
            negative = true;
            n=-n;
        }
        unordered_map<int ,double> dp;
        double res=x;
        dp[1]=x;
        int counter=1;
        while(counter*2<n){
            res=dp[counter]*res;
            counter=counter*2;
            dp[counter]=res;
        }
        cout<<dp[4];
        int p=counter;
        
        counter=n-p;
        while(counter>0){
                if(counter-p<0){
                p=p/2;
                continue;
                }
                res=res*dp[p];
                counter=counter-p;  
            }
        if(negative){
            res=1/res;
        }
        return res;



        
    }
};
