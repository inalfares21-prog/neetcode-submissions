class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        vector<long long>curr(points[0].size());
        vector<long long>pref(curr.size());
        vector<long long>suf(curr.size());
        for(int i=0;i<curr.size();i++){
            curr[i]=points[0][i];
        }
        for(int j=1;j<points.size();j++){
            suf[0]=curr[0];
            pref[curr.size()-1]=curr[curr.size()-1];
            for(int i=curr.size()-2;i>-1;i--){
                pref[i]=max(curr[i],pref[i+1]-1);
            }
            for(int i=1;i<curr.size();i++){
                suf[i]=max(curr[i],suf[i-1]-1);
            }
            for(int i=0;i<curr.size();i++){
                curr[i]=max(pref[i],suf[i])+points[j][i];
            }
        }
        long long res=0;
        for(long long i:curr){
            res=max(res,i);
        }
        return res;
        
    }
};