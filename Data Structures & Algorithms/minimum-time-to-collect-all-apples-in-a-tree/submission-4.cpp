class Solution {
public:
bool sol(vector<bool>& hasApple,unordered_map<int,vector<int>>&mp,int&res,int j,int prev){
    bool a=false;
    for(int i:mp[j]){
        if(i!=prev&&sol(hasApple,mp,res,i,j))a=true;
    }
    if(a||hasApple[j]){
        res+=2;
        return true;
    }
    return false;
}
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        int res=0;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        sol(hasApple,mp,res,0,-1);
        return max(res-2,0);

        
    }
};