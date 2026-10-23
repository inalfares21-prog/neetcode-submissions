class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int res=0;
        bool a=true;
        int k=strs[0].size();
        if(strs.size()==1)return strs[0];
        for(string i:strs){
            int a=i.size();
            k=min(k,a);
        }
        for(int i=0;i<k;i++){
           
            cout<<i;
            
            if(!a)break;
            res++;

            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=strs[j-1][i]){
                    res--;
                    a=false;
                    break;
                }
            }
        }
        string tmp;
        cout<<res;
        for(int i=0;i<res;i++){
            tmp.push_back(strs[0][i]);
        }
        return tmp;
 
        
    }
};