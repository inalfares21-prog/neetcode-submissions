class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        int curr;
        while(n!=1){

            if(s.count(n)){return false;}
            s.insert(n);
            curr=0;
            while(n>0){
                curr=curr+(n%10)*(n%10);
                n=n/10;
            }
            n=curr;
           

        }
        return true;
        
    }
};
