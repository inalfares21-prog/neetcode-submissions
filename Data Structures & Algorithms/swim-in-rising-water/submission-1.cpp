class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        q.push({grid[0][0],{0,0}});
        int v=0;
        while(q.size()>0){
            int i=q.top().second.first;
            int j=q.top().second.second;
            v=q.top().first;
            if(i==grid.size()-1&&j==grid.size()-1)return v;
            q.pop();
            if (grid[i][j] == -1){
                continue;
            }
            grid[i][j]=-1;
            if(i>0){
                if(grid[i-1][j]!=-1){
                    q.push({max(grid[i-1][j],v),{i-1,j}});
                } 
            }
            if(j>0){
                if(grid[i][j-1]!=-1){
                    q.push({max(grid[i][j-1],v),{i,j-1}});
                } 
            }
            if(j<grid[0].size()-1){
                if(grid[i][j+1]!=-1){
                    q.push({max(grid[i][j+1],v),{i,j+1}});
                } 
            }
             if(i<grid.size()-1){
                if(grid[i+1][j]!=-1){
                    q.push({max(grid[i+1][j],v),{i+1,j}});
                } 
            }
        }
        


      
        return v;
        
    }
};
