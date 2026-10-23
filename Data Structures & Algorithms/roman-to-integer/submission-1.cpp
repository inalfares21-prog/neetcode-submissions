class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['M']=1000;
        mp['D']=500;
        int res=mp[s[s.size()-1]];
        for(int i=s.size()-2;i>-1;i--){
            if(mp[s[i]]<mp[s[i+1]])res-=mp[s[i]];
            else{
                res+=mp[s[i]];
            }  
        }
        return res;
        
    }
};