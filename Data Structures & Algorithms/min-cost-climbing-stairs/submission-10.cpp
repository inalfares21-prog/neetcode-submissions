class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a=cost[0];
        int b=cost[1];
        for(int i=2;i<cost.size();i++){
            int t=b;
            b=min(b,a)+cost[i];
            a=t;
        }
        return min(a,b);
        
    }
};
