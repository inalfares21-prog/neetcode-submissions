class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int curr=prices[0];
        for(int i: prices){
            if(i>curr){
                res=max(res,i-curr);
            }
            else{
                curr=i;
            }
        }
        return res;
        
    }
};
