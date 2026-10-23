class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int k=0;
        map<char,int>mp;
        for(char c:order){
            mp[c]=k;
            k++;
        }
        for(int i=1;i<words.size();i++){
            for(int j=0;j<words[i-1].size();j++){
                if(j>words[i].size()-1)return false;
                if(mp[words[i-1][j]]<mp[words[i][j]])break;
                if(mp[words[i-1][j]]>mp[words[i][j]])return false;
            }
        }
        return true;
        
    }
};