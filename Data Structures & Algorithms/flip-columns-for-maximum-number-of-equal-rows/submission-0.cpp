class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        map<string,int>mp;
        for(int i=0;i<matrix.size();i++){
            string tmp;
            int add=0;
            if(matrix[i][0]==0)add=1;
            for(int j=1;j<matrix[0].size();j++){
                tmp.push_back((matrix[i][j]+add)%2-'0');
            }
            mp[tmp]++;
        }
        int res=0;
        for(const auto&[key,value]:mp){
            res=max(res,value);
        }
        return res;

    }
};
