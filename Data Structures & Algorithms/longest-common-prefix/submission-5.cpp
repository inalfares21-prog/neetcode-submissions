class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int res=0;
        int k=strs[0].size();
        for(string s:strs){
            int c=s.size();
            k=min(k,c);
        }
        bool a=false;
        for(int i=0;i<k;i++){
            if(a)break;
            res++;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=strs[j-1][i]){
                    a=true;
                    res--;
                    break;
                }
            }
        }
        string out;
        for(int i=0;i<res;i++){
            out.push_back(strs[0][i]);
        }
        return out;
        
    }
};