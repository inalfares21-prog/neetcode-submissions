class Solution {
    int cal(string &s,bool a,int i) {
        int res=0;
        while((s[i]-'0'>-1&&s[i]-'0'<10)||s[i]==' '){
            if(s[i]==' '){
                i++;
                continue;
            }
            res=res*10+s[i]-'0';
            i++;
        }
        while(i<s.size()){
            if(s[i]==' '){
                i++;
                continue;
            }
            if(s[i]=='+'){
                if(a)return res-cal(s,!a,i+1);
                return res+cal(s,a,i+1);
            }
            if(s[i]=='-'){
                if(a){
                    return res+cal(s,a,i+1);
                }
                return res-cal(s,!a,i+1);
            }
            if(s[i]=='*'){
                i++;
                int curr=0;
            
            while((i<s.size()&&s[i]-'0'>-1&&s[i]-'0'<10)||s[i]==' '){
            if(s[i]==' '){
                i++;
                continue;
            }
            curr=curr*10+s[i]-'0';
            i++;
            }
            res*=curr;
            }
             if(s[i]=='/'){
                i++;
                int curr=0;
            
            while((i<s.size()&&s[i]-'0'>-1&&s[i]-'0'<10)||s[i]==' '){
            if(s[i]==' '){
                i++;
                continue;
            }
            curr=curr*10+s[i]-'0';
            i++;
            }
            res/=curr;
            }
        }
        return res;
    }




    
public:
    int calculate(string s) {
        
        return cal(s,false,0);
       

    
        
    }
};