class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string ,char>mp;
        map<char,string>m;
        int j=0;
        for(char c:pattern){
            string tmp;
            if(j>=s.size())return false;
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
                if(mp[tmp]!=c||c&&m[c]!=tmp)return false;
            }

        }
        cout<<s.size();
        cout<<j;
        return j>=s.size()-1;
        
    }
};