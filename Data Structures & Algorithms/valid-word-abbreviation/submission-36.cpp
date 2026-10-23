class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j=0;
        for(int i=0;i<abbr.size();i++){
            if(abbr[i]=='0'){
                return false;
            }
            string tmp;
            while(i<abbr.size()&&abbr[i]-'0'>=0&&abbr[i]-'0'<10){
                tmp.push_back(abbr[i]);
                i++;
            }
            int k=0;
            
            if(tmp.size()>0){
                cout<<tmp<<endl;
                k=stoi(tmp);
            }
            j+=k;
            if(j>word.size()-1){
                if(j==word.size())return i==abbr.size();
                else return false;
            }
            else{
                if(i>abbr.size()-1)return false;
                if(abbr[i]!=word[j])return false;
            }
            j++;
        }
        return j==word.size();
        
    }
};