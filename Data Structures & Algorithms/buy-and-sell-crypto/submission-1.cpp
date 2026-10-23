class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int count=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>count){
                res=max(res,prices[i]-count);
            }
            else{
                count=prices[i];
            }

        }
        return res;
        
    }
};
