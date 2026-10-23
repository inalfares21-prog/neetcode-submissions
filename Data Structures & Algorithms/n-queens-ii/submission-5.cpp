class Solution {
public:
bool help(vector<vector<bool>>&tmp,int i,int j){
    
    for(int p=0;p<i;p++){
        if(tmp[p][j])return false;
    }
    int k=0;
    while(i-k>=0&&j-k>=0){
        if(tmp[i-k][j-k])return false;
        k++;
    }
    k=0;
    while(i-k>-1&&j+k<tmp.size()){
        if(tmp[i-k][j+k])return false;
        k++;
    }
    return true;
}
void sol(vector<vector<bool>>&tmp,int i,int res,int &ans,int n){
    if(res==n)ans++;
    for(int a=i+1;a<n;a++){
        for(int b=0;b<n;b++){
            if(help(tmp,a,b)){
                tmp[a][b]=true;
                sol(tmp,a,res+1,ans,n);
                tmp[a][b]=false;
            }
        }
    }
    
}
    int totalNQueens(int n) {
        int ans=0;
        vector<vector<bool>>tmp(n,vector<bool>(n));
        sol(tmp,-1,0,ans,n);
        return ans;
        
    }
};