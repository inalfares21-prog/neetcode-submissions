class Solution {
public:

    bool wordPattern(string pattern, string s) {
        map<string,char>mp;
        map<char,string>m;
        
        int j=0;
        for(char c:pattern){
            string tmp;
            while(j<s.size()&&s[j]!=' '){
                tmp.push_back(s[j]);
                j++;
            }
            j++;
            if(!mp.count(tmp)&&!m.count(c)){
                mp[tmp]=c;
                m[c]=tmp;
            }
            else{
                if(mp[tmp]!=c||m[c]!=tmp)return false;
            }
        }
        cout<<j;
        return j==s.size()+1;
    }
};