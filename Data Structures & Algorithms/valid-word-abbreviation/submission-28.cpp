class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j=0;
       
        
        for(int i=0;i<abbr.size();i++){
           
           int num=0;
            if(abbr[i]-'0'==0)return false;
           
           
            while(i<abbr.size()&&abbr[i]-'0'>-1&&abbr[i]-'0'<10){
               
                num=num*10+abbr[i]-'0';
                i++;
            }
           

          
            
            j=j+num;
        
          
            
            
            if(j>word.size()-1){
                if(j>word.size())return false;
                if(i>abbr.size()-1){
                    return true;
                }
               
                return false;
            }
            

          
            if(abbr[i]!=word[j])return false;
            j++;

        }
        return true;
        
    }
};