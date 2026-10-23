class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c=prices[0];
        int res=0;
        for(int i:prices){
            if(i>c){
                res=max(res,i-c);
            }
            else{
                c=i;
            }
        }
        return res;
        
    }
};
