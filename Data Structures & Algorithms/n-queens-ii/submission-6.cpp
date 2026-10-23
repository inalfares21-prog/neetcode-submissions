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
void sol(vector<vector<bool>>&tmp,int i,int &ans,int n){
    if(i==n)ans++;
    for(int j=0;j<n;j++){
        if(help(tmp,i,j)){
            tmp[i][j]=true;
            sol(tmp,i+1,ans,n);
            tmp[i][j]=false;
        }
    }
    
    
}
    int totalNQueens(int n) {
        int ans=0;
        vector<vector<bool>>tmp(n,vector<bool>(n));
        sol(tmp,0,ans,n);
        return ans;
        
    }
};