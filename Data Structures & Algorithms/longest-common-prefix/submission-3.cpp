class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)return strs[0];
        int a=strs[0].size();
        int k=-1;
        bool f=false;
        for(string s:strs){
            int b=s.size();
            a=min(a,b);
        }
        for(int i=0;i<a;i++){
            if(f)break;
            for(int j=1;j<strs.size();j++){
                
                if(strs[j][i]!=strs[j-1][i]){
                    f=true;
                    if(j!=1){
                    k--;
                    }
                   
                    break;
                }
                k=i;
            }
        }
        string res;
        if(k!=-1){
            res=strs[0].substr(0,k+1);
            
            return res;
        }
        
    }
};