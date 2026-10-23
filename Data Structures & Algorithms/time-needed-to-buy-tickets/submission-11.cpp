class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        
        int res=0;
        for(int i=0;i<=k;i++){
            res+=min(t[i],t[k]);
        }
        for(int i=k+1;i<t.size();i++){
            res+=min(t[i],t[k]-1);
        }
        return res;
    }
};