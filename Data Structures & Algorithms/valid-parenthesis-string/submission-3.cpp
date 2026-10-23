class Solution {
public:
    bool checkValidString(string s) {
        int b=0;
        int n=0;
        int tor=0;
       

        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                b--;
                
            }
            else{
                if(s[i]=='('){
                    
                    b++;
                }
                else{
                    n++;
                    
                }
            }
            if(b<0){
                if(n==0){
                    return false;
                }
                tor++;
                b++;
                n--;
            }
        } 
        for(int i=0;i<s.size();i++){
            
            if(tor==0){
                break;
            }
            if(s[i]=='*'){
                s[i]=='(';
                tor--;
            }
        }
        b=0;
        n=0;
        for(int i=s.size()-1;i>-1;i--){
            if(s[i]=='('){b--;}
            else{
                if(s[i]==')'){
                    b++;
                }
                else{
                    n++;
                }
            }
            
            if(b<0){
                if(n==0){
                    
                    return false;
                } 
                n--;
                b++;
            }
        }
        
        return true;
        
    }
};
