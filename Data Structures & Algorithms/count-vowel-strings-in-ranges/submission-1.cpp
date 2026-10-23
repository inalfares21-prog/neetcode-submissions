class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char>v{'a', 'e', 'i', 'o', 'u'};
        vector<int>tmp(words.size());
        for(int i=0;i<words.size();i++){
            string s=words[i];
            if(v.count(s[0])&&v.count(s[s.size()-1])){
                tmp[i]=1;
            }
            if(i>0)tmp[i]+=tmp[i-1];
        }
        vector<int>res(queries.size());
        for(int i=0;i<queries.size();i++){
            res[i]=tmp[queries[i][1]];
            if(queries[i][0]>0)res[i]-=tmp[queries[i][0]-1];
        }
        return res;
    }
};