class Solution {
public:
    string largestGoodInteger(string num) {
        string res;
       
        for(int i=2;i<num.size();i++){
            string curr;
            curr.push_back(num[i-2]);
            curr.push_back(num[i-1]);
            curr.push_back(num[i]);
            if(curr[0]==curr[1]&&curr[1]==curr[2]){
                res=max(res,curr);
            }
        }
        return res;
    }
};