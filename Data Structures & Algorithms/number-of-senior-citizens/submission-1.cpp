class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res=0;
        for(string s:details){
            string tmp;
            tmp.push_back(s[11]);
            tmp.push_back(s[12]);
            int t=stoi(tmp);
            if(t>60)res++;

        }
        return res;
        
    }
};