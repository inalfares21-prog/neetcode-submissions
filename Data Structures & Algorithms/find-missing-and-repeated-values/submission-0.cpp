class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a;
        int b;
        unordered_set<int>s;
        for(int i=0;i<grid.size();i++){
              for(int j=0;j<grid[i].size();j++){
                if(s.count(grid[i][j])){
                    a=grid[i][j];
                }
                else{
                    s.insert(grid[i][j]);
                }
              }
        }
        for(int i=1;i<(grid.size())*(grid.size())+1;i++){
            if(!s.count(i)){
                b=i;
            }
        }
        return{a,b};
        
    }
};