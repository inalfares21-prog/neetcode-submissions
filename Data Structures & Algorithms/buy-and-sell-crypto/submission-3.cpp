class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int curr=prices[0];
        for(int i:prices){
            if(i<curr)curr=i;
            else{
                res=max(res,i-curr);
            }
        }
        return res;
        
    }
};
