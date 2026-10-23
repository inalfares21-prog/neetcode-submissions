class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int res=0;
        int a=strs[0].size();
        for(string s:strs){
            int k=s.size();
            a=min(a,k);
        }
        bool f=true;
        for(int i=0;i<a;i++){
            if(!f)break;
            res++;
            f=true;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=strs[j-1][i]){
                    res--;
                    f=false;
                    break;
                }
            }
        }
        string tmp;
        for(int i=0;i<res;i++){
            tmp.push_back(strs[0][i]);
        }
        return tmp;
        
    }
};