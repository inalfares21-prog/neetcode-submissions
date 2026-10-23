class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=1;
        long long r=(num+1)/2;
        while(l<=r){
            long long m=(l+r)/2;
            if(m*m==num)return true;
            if(m*m>num){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        cout<<l<<endl;
        cout<<r;
        return false;
        
    }
};