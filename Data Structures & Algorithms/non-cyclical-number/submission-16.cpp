class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        
        while(n>0){
            if(n==1)return true;
            if(s.count(n))return false;
            s.insert(n);
            int c=0;
            while(n>0){
                c=c+(n%10)*(n%10);
                n/=10;
            }
            n=c;
        }
        return true;
        
    }
};
