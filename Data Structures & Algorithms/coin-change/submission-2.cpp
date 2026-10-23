
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)return 0;
        const int INF = 100001;
        vector<int>vec(amount+1,INF);
        for(int i=0;i<amount+1;i++){
            for(int j=0;j<coins.size();j++){
                
                if(i-coins[j]==0){
                    vec[i]=1;
                    break;
                }
                if(i-coins[j]>0){
                vec[i]=min(vec[i],vec[i-coins[j]]+1);
                }
               
            }
            cout<<vec[i]<<""<<i<<endl;
        }
        if(vec[amount]==INF)return -1;

        return vec[amount];
        
    }
};
