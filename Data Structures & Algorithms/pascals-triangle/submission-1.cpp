class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int>prev(1,1);
        vector<int>curr(2,1);
        while(curr.size()<numRows+1){
            curr[0]=1;
            curr[curr.size()-1]=1;
            for(int i=0;i<prev.size()-1;i++){
                curr[i+1]=prev[i]+prev[i+1];
            }
            res.push_back(prev);
            prev=curr;
            vector<int>t(curr.size()+1);
            curr=t;

        }
        res.push_back(prev);
        
        return res;

        
    }
};