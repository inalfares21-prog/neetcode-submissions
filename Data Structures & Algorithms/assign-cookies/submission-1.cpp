class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int j=0;
        for(int i:s){
            if(j==g.size())return g.size();
            if(g[j]<=i)j++;

        }
        return j;
        
    }
};