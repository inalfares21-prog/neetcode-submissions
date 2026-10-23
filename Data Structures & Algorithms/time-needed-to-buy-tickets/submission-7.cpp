class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int res=0;
        for(int i=0;i<k+1;i++){
            res+=min(t[k],t[i]);
        }
        for(int i=k+1;i<t.size();i++){
            res+=min(t[k]-1,t[i]);

        }
        return res;

        
    }
};