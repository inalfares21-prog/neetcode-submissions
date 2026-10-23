class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(char c:s){
            if(c=='1')count++;
        }
        string res;
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