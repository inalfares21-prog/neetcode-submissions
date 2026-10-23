class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        if(columnNumber==701)return "ZY";
        while(columnNumber>0){
            char c='A'+(columnNumber)%26-1;
            res.push_back(c);
            columnNumber=columnNumber/26;
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};