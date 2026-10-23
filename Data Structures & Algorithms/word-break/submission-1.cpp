class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        vector<bool> avstart(s.size());
        bool vs=true;
        bool progress=false;
        avstart[0]=true;
        for(int i=0;i<s.size();i++){
            if(!avstart[i])continue;
            for(int j=0;j<wordDict.size();j++){
                for(int k=0;k<wordDict[j].size();k++){
                    
                    if(i+k>=s.size()||wordDict[j][k]!=s[i+k]){
                        vs=false;
                        break;
                    }
                }
                
                if(vs){
                    if(i+wordDict[j].size()==s.size()){
                        return true;
                    }
        
                    avstart[i+wordDict[j].size()]=true;
                    

                }
                vs=true;

                }
            }
            return false;
        
        
    }
};
