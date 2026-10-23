class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        
        for(char x:s){
            mp[x]++;
        }
         for(char x:t){
            mp2[x]++;
        }
        return mp==mp2;

        
    }
};
