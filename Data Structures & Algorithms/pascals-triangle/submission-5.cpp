class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>curr(1,1);
        ans.push_back(curr);
        while(curr.size()<numRows){
            vector<int>res(curr.size()+1);
            res[0]=1;
            res[res.size()-1]=1;
            for(int i=1;i<res.size()-1;i++){
                res[i]=curr[i-1]+curr[i];
            }
            ans.push_back(res);
            curr=res;
        }
        return ans;
    }
};