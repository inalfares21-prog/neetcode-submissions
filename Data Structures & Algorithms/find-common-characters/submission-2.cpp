class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       unordered_map<char,int>mp;
       for(char c:words[0]){
        mp[c]++;
       }
       for(int i=1;i<words.size();i++){
        unordered_map<char,int>m;
        for(char c:words[i]){
            if(mp[c]>0){
                mp[c]--;
                m[c]++;
            }
        }
        mp=m;
       }
       vector<string>res;
       for(char c:words[0]){
        if(mp[c]>0){
            mp[c]--;
            string t;
            t.push_back(c);
            res.push_back(t);
        }
       }
       return res;
    }
};