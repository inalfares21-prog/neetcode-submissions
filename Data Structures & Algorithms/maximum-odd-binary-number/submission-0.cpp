class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count =0;
        string res;
        for(char x: s){
            if(x=='1'){
                count++;
            }
        }
        while(count>1){
            res.push_back('1');
            count--;
        }
        while(res.size()<s.size()-1){
            res.push_back('0');
        }
        res.push_back('1');
        return res;

        
    }
};