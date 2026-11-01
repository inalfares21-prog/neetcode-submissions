class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>res;
        map<string,int>mp;
        string tmp;
        s1.push_back(' ');
        s2.push_back(' ');
        for(char c:s1){
            if(c==' '){
                mp[tmp]++;
                string t;
                tmp=t;
                continue;
            }
            tmp.push_back(c);
            

        }
        for(char c:s2){
            if(c==' '){
                mp[tmp]++;
                string t;
                tmp=t;
                continue;
            }
            tmp.push_back(c);
            

        }
        for(auto [key,value]:mp){
            if(value==1)res.push_back(key);
        }
        return res;

    }
};
