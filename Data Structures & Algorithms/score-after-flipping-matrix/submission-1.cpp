class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            if(grid[i][0]==0){
                for(int j=0;j<grid[0].size();j++){
                    grid[i][j]=(grid[i][j]+1)%2;
                }
            }
        }
        res +=(grid.size())*(pow(2,grid[0].size()-1));
        cout<<res;
        for(int j=1;j<grid[0].size();j++){
            int a=0;
            int b=0;
            for(int i=0;i<grid.size();i++){
                if(grid[i][j]==0)a++;
                else b++;
            }
            res+=pow(2,grid[0].size()-1-j)*max(a,b);
        }
        return res;
    }
};
