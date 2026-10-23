class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0;
        int b=0;
        for(int i:bills){
            if(i==5){
                a++;
            }
            if(i==10){
                if(a>0){
                    a--;
                    b++;
                }
                else{
                    return false;
                }
            }
            if(i==20){
                if(b>0&&a>0){
                    a--;
                    b--;
                }
                else{
                    if(a>2){
                        a-=3;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};