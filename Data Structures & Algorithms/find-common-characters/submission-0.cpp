class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>res;
        map<char,int>mp;
        for(char c:words[0]){
            mp[c]++;
        }
        for(int i=1;i<words.size();i++){
            map<char,int>m;
            for(char c:words[i]){
                if(m[c]<mp[c]){
                    m[c]++;
                }
            }
            mp=m;
        }
        for(char c:words[0]){
            if(mp[c]>0){
                string tmp;
                tmp.push_back(c);
                res.push_back(tmp);
                mp[c]--;
            }

        }
        return res;
        
    }
};