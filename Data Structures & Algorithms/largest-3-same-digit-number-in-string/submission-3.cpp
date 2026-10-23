class Solution {
public:
    string largestGoodInteger(string num) {
        int out =-1;
        for(int i=0;i<num.size()-2;i++){
        string res;
        res.push_back(num[i]); res.push_back(num[i+1]); res.push_back(num[i+2]);
        int k=stoi(res);
        if(k==999||k==888||k==777||k==666||k==555||k==444||k==333||k==222||k==111||k==0){
            out =max(out,k);
        }
        }
        if(out ==-1)return "";
        if(out ==0)return "000";
        return to_string(out);

        
    }
};