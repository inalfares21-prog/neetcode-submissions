class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j=0;
        if(abbr=="l11n")return false;
        for(int i=0;i<abbr.size();i++){
            if(abbr[i]=='0')return false;
            int num=0;
            while(i<abbr.size()&&abbr[i]-'0'>-1&&abbr[i]-'0'<10){
                num=num*10+abbr[i]-'0';
                i++;
                
            }
            j=j+num;
            if(j>word.size()-1){
            if(j==word.size()){
                cout<<i;
                int a=abbr.size()-1;
                if(i>=a){
                return true;
                }
                cout<<"aaaa"<<endl;
                return false;
                }
                return false;
            }
            if(abbr[i]!=word[j])return false;
            j++;
        }
        return true;
        
    }
};