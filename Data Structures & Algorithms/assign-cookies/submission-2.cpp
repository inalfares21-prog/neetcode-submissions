class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int j=0;
        for(int i:s){
            if(i>=g[j]){
                j++;
            }
            if(j==g.size())break;
        }
        return j;
        
    }
};