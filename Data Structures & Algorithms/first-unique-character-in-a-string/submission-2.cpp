class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(mp[c]==1)return i;
        }
        return -1;
        
    }
};