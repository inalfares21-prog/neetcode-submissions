class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int>curr(1,triangle[0][0]);
        for(int i=1;i<triangle.size();i++){
            vector<int>res(curr.size()+1);
            res[curr.size()]=curr[curr.size()-1]+triangle[i][curr.size()];
            for(int j=0;j<res.size()-1;j++){
                res[j]=curr[j];
                if(j>0){
                    res[j]=min(res[j],curr[j-1]);
                }
                res[j]+=triangle[i][j];
            }
            curr=res;
        }
        int ans=curr[0];
        for(int i:curr){
            ans=min(ans,i);
        }
        return ans;
        
    }
};