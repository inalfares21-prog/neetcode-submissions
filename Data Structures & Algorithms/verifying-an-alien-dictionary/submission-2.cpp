class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int>mp;
        int i=0;
        for(char c:order){
            mp[c]=i;
            i++;
        }
        for(int i=1;i<words.size();i++){
            for(int j=0;j<words[i-1].size();j++){
                if(j>words[i].size()-1)return false;
                if(mp[words[i][j]]>mp[words[i-1][j]])break;
                if(mp[words[i][j]]<mp[words[i-1][j]])return false;
            }
        }
        return true;
        
    }
};