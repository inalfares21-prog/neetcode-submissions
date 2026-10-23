class Solution {
public:
    string largestGoodInteger(string num) {
        
        
        string res;
        
        for(int i=2;i<num.size();i++){
            string tmp;
            tmp.push_back(num[i]);
            tmp.push_back(num[i-1]);
            tmp.push_back(num[i-2]);
            if(tmp[0]==tmp[1]&&tmp[0]==tmp[2]){
                cout<<tmp;
                res=max(res,tmp);
            }
            
        }
        return res;
    }
};