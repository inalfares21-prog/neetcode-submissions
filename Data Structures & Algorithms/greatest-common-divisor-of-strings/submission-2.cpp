class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string tmp=str1+str2;
        string tmp2=str2+str1;
        if(tmp!=tmp2)return "";
        int t=gcd(str1.size(),str2.size());
        string res;
        for(char c:str1){
            res.push_back(c);
            if(res.size()==t)break;
        }
        return res;


        
    }
};