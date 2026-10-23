class Solution {
public:
    int numDecodings(string s) {
        int curr=1;
        int prev=1;
        int degit;
        int degitprev=0;
        for(int i=0;i<s.size();i++){
            degit=s[i]-'0';
            if(degit==0&&(degitprev==0||degitprev>2)){
                return 0;
            }
            if((degit>6&&degitprev==2)||degitprev==0||degitprev>2){
                prev=curr;
            }
            else{
                if(degit==0){
                    curr=prev;
                    prev=0;
                }
                else{
                    curr=curr+prev;
                    prev=curr-prev;
                }
            }
            degitprev=degit;
            
        }
        return curr;
        
    }
};
