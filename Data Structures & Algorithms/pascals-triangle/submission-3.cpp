class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int>curr(1,1);
        vector<vector<int>>out;
        out.push_back(curr);

        while(curr.size()<numRows){
            vector<int>res(curr.size()+1);
            res[0]=1;res[res.size()-1]=1;
            for(int i=1;i<res.size()-1;i++){
                res[i]=curr[i-1]+curr[i];
            }
            curr =res;
            out .push_back(curr);
        }
        return out;
        
    }
};