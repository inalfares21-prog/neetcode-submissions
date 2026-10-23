class Solution {
public:
    string largestGoodInteger(string num) {
        string res;
        string ans;
        for(int i=0;i<3;i++){
            res.push_back(num[i]);
        }
        for(int i=3;i<num.size();i++){
            if(res[0]==res[1]&&res[0]==res[2]){
                ans=max(res,ans);
            }
            res.push_back(num[i]);
            res.erase(res.begin());
        }
         if(res[0]==res[1]&&res[0]==res[2]){
                ans=max(res,ans);
         }
        return ans;
        
    }
};