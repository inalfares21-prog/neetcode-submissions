class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        set<int>s;
        vector<int>res(2);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(s.count(grid[i][j]))res[0]=grid[i][j];
                s.insert(grid[i][j]);
            }
        }
        for(int i=1;i<grid.size()*grid.size()+1;i++){
            if(!s.count(i))res[1]=i;
        }
        return res;
        
    }
};