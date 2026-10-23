class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int j=0;
        for(int i:s){
            if(j==g.size())return j;
            if(i>=g[j])j++;

        }
        return j;
        
    }
};