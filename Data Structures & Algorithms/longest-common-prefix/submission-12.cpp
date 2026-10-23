class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int a=strs[0].size();
        for(string s:strs){
            int k=s.size();
            a=min(a,k);
        }
        int tmp=-1;
        for(int i=0;i<a;i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j-1][i]!=strs[j][i]){
                    tmp=i;
                    break;
                }
                
            }
            if(tmp!=-1)break;
        }
        cout<<tmp;
        if(tmp==-1)tmp=a;
        string res;
        for(int i=0;i<tmp;i++){
            res.push_back(strs[0][i]);
        }
        return res;
        
    }
};