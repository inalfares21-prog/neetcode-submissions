class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        if(n<=0)return false;
        while(n>0){
            cout<<n<<endl;
            if(n==1)return true;
            if(s.count(n))return false;
            s.insert(n);
            int c=0;
            while(n>0){
                c=c+(n%10)*(n%10);
                n=n/10;
            }
            n=c;
        }
        return false;
        
    }
};
