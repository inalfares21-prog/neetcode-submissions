class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>vec(amount+1,vector<int>(coins.size(),0));
        for(int i=0;i<coins.size();i++){
            vec[0][i]=1;
        }           
        for(int i=1;i<amount+1;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>-1){
                    if(vec[i-coins[j]][j]>0){
                        
                        vec[i][j]=vec[i-coins[j]][j];
                    }
                }
            }
            for(int j=1;j<coins.size();j++){
                vec[i][j]+=vec[i][j-1];
            }
        }
        
        return vec[amount][coins.size()-1];

        
    }
};
