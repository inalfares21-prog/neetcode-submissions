class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>res;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                int val =matrix[i][j];
                bool a=true;
                for(int k=0;k<matrix.size();k++){
                    if(matrix[k][j]>val)a=false;
                }
                bool c=true;
                for(int b=0;b<matrix[0].size();b++){
                    if(matrix[i][b]<val)c=false;
                }
                if(a&&c)res.push_back(val);
            }
        }
        return res;

    }
};
