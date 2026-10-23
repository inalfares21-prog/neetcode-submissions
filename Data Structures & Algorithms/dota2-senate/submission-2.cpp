class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=0;
        int r=0;
        for(char c:senate){
            if(c=='R')r++;
            else{
                n++;
            }
        }
        int a=0;
        int b=0;
        for(int i=0;i<2;i++){
        for(char c:senate){
            if(c=='R'){
                if(a==0){
                    b--;
                    n--;
                }
                else{
                    a++;
                }
            }
            if(c=='D'){
                if(b==0){
                    a--;
                    r--;
                }
                else{
                    b++;
                }
            }
            if(n<=0)return "Radiant";
            if(r<=0)return "Dire";
        }
        }
        
        
        
    }
};