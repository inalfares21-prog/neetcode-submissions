class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int>m;
        for(int i=0;i<order.size();i++){
            m[order[i]]=i;
        }
        for(int j=1;j<words.size();j++){
            for(int i=0;i<words[j-1].size();i++){
                if(i>words[j].size()-1)return false;
                if(m[words[j][i]]<m[words[j-1][i]])return false;
                else{
                    if(m[words[j][i]]>m[words[j-1][i]])break;
                }
            }
        }
        return true;
        
    }
};