class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            int count=0;
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    count++;
                }
            }
            if(count>1){
                for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]==1)grid[i][j]=2;
                }
                res+=count;
            }
        }
        for(int j=0;j<grid[0].size();j++){
            int count=0;
            int connected=0;
            for(int i=0;i<grid.size();i++){
                if(grid[i][j]==2){
                    count++;
                    connected++;
                }
                if(grid[i][j]==1)count++;
            }
            if(count>1){
                res+=count-connected;
            }
        }
        return res;

    }
};