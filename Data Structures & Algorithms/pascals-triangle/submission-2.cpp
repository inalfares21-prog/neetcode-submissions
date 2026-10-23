class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>out;
        out.push_back({1});
        if(numRows==1)return out;
        vector<int>curr(2,1);
        vector<int>prev(2,1);
        out.push_back({curr});
        while(curr.size()<numRows){
            prev=curr;
            vector<int>t(curr.size()+1);
            curr=t;
            curr[0]=1;
            curr[curr.size()-1]=1;
            for(int i=1;i<prev.size();i++){
                curr[i]=prev[i-1]+prev[i];
            }
            out.push_back(curr);

        }
        return out;

        
    }
};