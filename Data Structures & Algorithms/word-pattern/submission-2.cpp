class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>m1;
        int j=0;
        s += "";
        map<string,char>m2;
        for(char c:pattern){

            string tmp;
            if(j>=s.size())return false;
            while(s[j]!=' '&&j<s.size()){
                tmp.push_back(s[j]);
                j++;
            }
            j++;
            if(!m1.count(c)&&!m2.count(tmp)){
                m1[c]=tmp;
                m2[tmp]=c;
            }
            else{
                if(m1.count(c)&&m2.count(tmp)){
                    if(m1[c]==tmp&&m2[tmp]==c)continue;
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            
        }
        if(j<s.size()-1)return false;
        return true;
        
    }
};