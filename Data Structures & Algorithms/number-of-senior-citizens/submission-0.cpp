class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res=0;
        for(string s:details){
            string k;
            k.push_back(s[11]);
            k.push_back(s[12]);
             int j=stoi(k);
             if(j>60)res++;
        }
        return res;
        
    }
};