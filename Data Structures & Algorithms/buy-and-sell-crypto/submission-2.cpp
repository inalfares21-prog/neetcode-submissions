class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int c=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>c){
                res=max(res,prices[i]-c);
            }
            else{
                c=prices[i];
            }
        }
        return res;
        
    }
};
