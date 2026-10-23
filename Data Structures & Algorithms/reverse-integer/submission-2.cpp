class Solution {
public:
    int reverse(int x) {
        int res=0;
        bool n=false;
        if(x<0){
            n=true;
            x=-x;
        }
        while(x>0){
            if(!n&&(res>(INT_MAX-x%10)/10)||(n&&(-res<(INT_MIN+x%10)/10))){
                return 0;
            }
            res=res*10+x%10;
            x=x/10;
        }
        if(n){
            res=-res;
        }
        return res;
        
    }
};
