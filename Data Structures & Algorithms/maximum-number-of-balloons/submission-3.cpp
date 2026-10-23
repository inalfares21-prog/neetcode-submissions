class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        for(char c:text){
            mp[c]++;
        }
        int res=mp['b'];
        res=min(res,mp['a']);
        res=min(res,mp['l']/2);
        res=min(res,mp['o']/2);
        res=min(res,mp['n']);
        return res;
        
    }
};