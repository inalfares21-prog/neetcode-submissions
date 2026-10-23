class Solution {
public:
bool sol(vector<bool>& hasApple,map<int,vector<int>>&mp,int&res,int j,set<int>&s){
    if(s.count(j))return false;
    s.insert(j);
    bool a=false;
    for(int i:mp[j]){
        if(sol(hasApple,mp,res,i,s))a=true;
    }
    if(a||hasApple[j]){
        res+=2;
        return true;
    }
    return false;
}
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        int res=0;
        map<int,vector<int>>mp;
        set<int>s;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        sol(hasApple,mp,res,0,s);
        return max(res-2,0);

        
    }
};