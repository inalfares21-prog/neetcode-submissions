class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int>start(k+1);
        vector<int>end(k+1);
        int ans=0;
        for(int i=0;i<k;i++){
            start[i+1]=start[i]+cardPoints[i];
            end[k-i-1]=end[k-i]+cardPoints[cardPoints.size()-1-i];
        }
        for(int i=0;i<k+1;i++){
            ans=max(ans,start[i]+end[i]);
        }
        return ans;
        
        
    }
};