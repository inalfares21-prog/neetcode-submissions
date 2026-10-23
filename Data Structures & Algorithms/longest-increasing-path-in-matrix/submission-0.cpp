class Solution {
    int sol(vector<vector<int>>& matrix,vector<vector<int>>& dp,int prev,int i,int j){
        if(matrix[i][j]>prev){
            if(dp[i][j]>0){
                return dp[i][j];
            }
            int c=0;
            if(i>0){
                c=max(c,sol(matrix,dp,matrix[i][j],i-1,j));
            }
            if(j>0){
                c=max(sol(matrix,dp,matrix[i][j],i,j-1),c);
            }
            if(i<matrix.size()-1){
                c=max(sol(matrix,dp,matrix[i][j],i+1,j),c);
            }
            if(j<matrix[0].size()-1){
                c=max(sol(matrix,dp,matrix[i][j],i,j+1),c);
            }
            dp[i][j]=c+1;
            return c+1;
        }
        return 0;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int res=0;
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size()));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(dp[i][j]==0){
                    res=max(res,sol(matrix,dp,-1,i,j));
                }
            }
        }
        return res;
        
    }
};
