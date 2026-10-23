class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        if(o[0][0]==1)return 0;
        o[0][0]=1;
        for(int j=1;j<o[0].size();j++){
            if(o[0][j]==1){
                o[0][j]=0;
            }
            else{
                o[0][j]=o[0][j-1];
            }
        }
        for(int i=1;i<o.size();i++){
            if(o[i][0]==1)o[i][0]=0;
            else {o[i][0]=o[i-1][0];}
            for(int j=1;j<o[0].size();j++){
                if(o[i][j]==1)o[i][j]=0;
                else{
                    o[i][j]=o[i-1][j]+o[i][j-1];
                }
            }
        }
        return o[o.size()-1][o[0].size()-1];
        
    }
};