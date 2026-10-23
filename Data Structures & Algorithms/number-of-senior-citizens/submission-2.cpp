class Solution {
public:
    int countSeniors(vector<string>& d) {
        int res=0;
        for(string s:d){
            string tmp;
            tmp.push_back(s[11]);
            tmp.push_back(s[12]);
            int k=stoi(tmp);
            if(k>60)res++;
        }
        return res;
        
    }
};