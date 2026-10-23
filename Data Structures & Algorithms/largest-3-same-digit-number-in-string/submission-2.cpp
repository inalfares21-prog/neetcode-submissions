class Solution {
public:
    string largestGoodInteger(string num) {
        int out=-1;
        for(int i=0;i<num.size()-1;i++){
            string tmp=num.substr(i,3);
            int res=stoi(tmp);
            if(res%111==0){
            out=max(out,res);
            }

        }
        string tres;
        
        if(out!=-1){
         tres=to_string(out);
        }
        if(out==0)tres="000";
        
        return tres;
      

        
    }
};