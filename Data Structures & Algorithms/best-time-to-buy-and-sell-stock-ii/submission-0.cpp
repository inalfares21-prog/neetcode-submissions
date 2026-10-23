class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c=prices[0];
        int res=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<c){
                c=prices[i];
            }
            else{
                res+=prices[i]-c;
                c=prices[i];
            }
        }
        return res;
        
    }
};