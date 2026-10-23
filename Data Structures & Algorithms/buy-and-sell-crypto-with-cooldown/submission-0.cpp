class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=0;
        int b=-prices[0];
        int c=0;
        for(int i=1;i<prices.size();i++){
            int tmp=c;
            c=b+prices[i];
            b=max(b,a-prices[i]);
            a=max(a,tmp);

        }
        return max(max(a,b),c);
        
    }
};
