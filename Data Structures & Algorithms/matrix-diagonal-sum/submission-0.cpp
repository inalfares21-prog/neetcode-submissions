class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++){
            sum=sum+mat[i][i];
            if(mat.size()-i-1!=i){
            sum=sum+mat[mat.size()-i-1][i];
            }
        }


        return sum;
        
    }
};