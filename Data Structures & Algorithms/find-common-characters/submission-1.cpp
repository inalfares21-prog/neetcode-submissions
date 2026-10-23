class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        multiset<char>m;
        for(char c:words[0]){
            m.insert(c);
        }
        for(int i=1;i<words.size();i++){
             multiset<char>mp;
             for(char c:words[i]){
                if(m.count(c)){mp.insert(c);m.erase(m.find(c));}
             }
             m=mp;

        }
        vector<string>res;
        for(auto k:m){
            res.push_back(string(1,k));
        }
        return res;
        
    }
};