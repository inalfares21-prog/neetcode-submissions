class Solution {
public:

    bool isValid(string k) {
        stack<char>s;
        for(char c:k){
            if(c=='}'){
                if(s.size()>0&&s.top()=='{'){
                    s.pop();
                }
                else{
                    return false;
                }
                continue;
                
            }
             if(c==']'){
                if(s.size()>0&&s.top()=='['){
                    s.pop();
                }
                else{
                    return false;
                }
                continue;
                
            }
             if(c==')'){
                if(s.size()>0&&s.top()=='('){
                    s.pop();
                }
                else{
                    return false;
                }
                continue;
                
            }
            s.push(c);
            
        }
        return s.size()==0;
        
    }
};
