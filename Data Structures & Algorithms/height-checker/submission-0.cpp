class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>res=heights;
        sort(res.begin(),res.end());
        int ans=0;
        for(int i=0;i<res.size();i++){
            if(res[i]!=heights[i])ans++;
        }
        return ans;
        
    }
};