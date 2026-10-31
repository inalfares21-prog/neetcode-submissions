class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>res;
        vector<int>mp(26);
        for(char c:words[0]){
            mp[c-'a']++;
        }
        for(int i=1;i<words.size();i++){
            vector<int>m(26);
            for(char c:words[i]){
                m[c-'a']=min(m[c-'a']+1,mp[c-'a']);
            }
            mp=m;
        }
        for(int i=0;i<26;i++){
            for (int j=0;j<mp[i];j++){
                string s;
                s.push_back('a'+i);
                res.push_back(s);
            }
        }
        return res;
        
    }
};