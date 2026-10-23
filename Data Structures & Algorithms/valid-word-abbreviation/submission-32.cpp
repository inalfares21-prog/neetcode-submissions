class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j=0;
        for(int i=0;i<abbr.size();i++){
            char c=abbr[i];
            int k=0;
            if(c=='0')return false;
            if(c-'0'>0&&c-'0'<10){
                string tmp;
                tmp.push_back(c);
                i++;
                c=abbr[i];
                while(c-'0'>=0&&c-'0'<10){
                    tmp.push_back(c);
                    i++;
                    c=abbr[i];
                }

                 k=stoi(tmp);
            }
                j+=k;
                cout<<j<<endl;
                if(j>word.size()){return false;}
                if(j==word.size()){
                    
                    if(i!=abbr.size())return false;
                    return true;
                }
                if(word[j]!=abbr[i])return false;
                j++;

            
        }
        return true;
        
    }
};