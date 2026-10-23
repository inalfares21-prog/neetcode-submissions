class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>res;
        set<int>s;
        for(vector<int> j:grid){
            for(int i:j){
                if(s.count(i)){
                    res.push_back(i);
                }
                s.insert(i);
            }
        }
        for(int i=1;i<grid.size()*grid.size()+1;i++){
            if(!s.count(i))res.push_back(i);
        }
        return res;
        
    }
};