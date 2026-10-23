class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j=0;
        for(int i=0;i<abbr.size();i++){
            string tmp;
            if(abbr[i]=='0')return false;
            while(isdigit(abbr[i])){
                tmp.push_back(abbr[i]);
                i++;
            }
            int k=0;
            if(tmp.size()>0){
                k=stoi(tmp);
            }
            
            j+=k;
            if(i==abbr.size()&&j==word.size())return true;
            if(j>word.size()){cout<<j;return false;}
            if(word[j]!=abbr[i]){cout<<j<<i;return false;}
            j++;
        }
        return j==word.size();
        
    }
};