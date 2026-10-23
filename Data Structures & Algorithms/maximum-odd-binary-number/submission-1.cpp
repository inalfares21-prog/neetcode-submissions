class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int a=0;
        int b=0;
        for(char c:s){
            if(c=='1')a++;
            else{b++;}
        }
        string res;
        for(int i=0;i<a-1;i++){res.push_back('1');}
         for(int i=0;i<b;i++){res.push_back('0');}
         res.push_back('1');
         return res;
    
        
    }
};