class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(char c:s){
            if(c=='1')count++;
        }
        string res;
        for(int i=0;i<count-1;i++){
            res.push_back('1');
        }
        while(res.size()<s.size()-1){
            res.push_back('0');
        }
        res.push_back('1');
        return res;
        
    }
};