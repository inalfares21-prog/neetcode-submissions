class Solution {
public:
    vector<int> findBuildings(vector<int>& h) {
        int curr=0;
        vector<int>res;
        for(int i=h.size()-1;i>-1;i--){
            if(h[i]>curr){
                res.push_back(i);
                curr=h[i];
            }
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};