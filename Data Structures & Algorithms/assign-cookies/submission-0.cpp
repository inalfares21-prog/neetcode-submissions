class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>=g[j]){
                j++;
            }
            if(j>g.size()-1){
                break;
            }
        }
        return j;
        
    }
};