class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>mp(26);
        for(string s:words){
            for(char c:s){
                mp[c-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(mp[i]%words.size()!=0)return false;
        }
        return true;
        
    }
};