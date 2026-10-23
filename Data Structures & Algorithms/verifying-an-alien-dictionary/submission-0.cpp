class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        for(int j=1;j<words.size();j++){
            for(int i=0;i<words[j-1].size();i++){
                if(words[j].size()-1<i)return false;
                if(mp[words[j-1][i]]>mp[words[j][i]])return false;
                 if(mp[words[j-1][i]]<mp[words[j][i]])break;

            }

        }
        return true;
        
    }
};