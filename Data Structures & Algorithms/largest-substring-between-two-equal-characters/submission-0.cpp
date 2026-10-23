class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,int>m;
        int res=-1;
        for(int i=0;i<s.size();i++){
            char c=s[i];

            if(m.count(c)){
                res=max(i-m[c]-1,res);
            }
            else{
                m[c]=i;
            }
        }
        return res;
        
    }
};