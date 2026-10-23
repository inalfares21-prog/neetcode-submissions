class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        int j=0;
        for(char c:s){
            if(mp[c]==1)return j;
            j++;
        }
        return -1;
        
    }
};