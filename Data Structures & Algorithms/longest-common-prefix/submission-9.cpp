class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int k=strs[0].size();
        for(string s:strs){
            int n=s.size();
            k=min(n,k);
        }
        int c=0;
        for(int i=0;i<k;i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=strs[j-1][i]){
                    if(i==0)return "";
                    string tmp;
                    for(int p=0;p<i;p++){
                        tmp.push_back(strs[0][p]);
                    }
                    return tmp;
                }
            }
        }
        string tmp;
        for(int i=0;i<k;i++){
            tmp.push_back(strs[0][i]);
        }
        return tmp;
        
    }
};