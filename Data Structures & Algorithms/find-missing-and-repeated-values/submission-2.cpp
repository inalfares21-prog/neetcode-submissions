class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        set<int>s;
        vector<int >res;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(s.count(grid[i][j])){
                    res.push_back(grid[i][j]);
                }
                s.insert(grid[i][j]);
            }
        }
        for(int i=1;i<grid.size()*grid.size()+1;i++){
            if(!s.count(i))res.push_back(i);
        }
        return res;
        
    }
};