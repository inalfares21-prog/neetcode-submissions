class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a=cost[0];
        int b=cost[1];
        if(cost.size()==1)return cost[0];
        for(int i=2;i<cost.size();i++){
            int t=b;
            b=min(b,a)+cost[i];
            a=t;

        }
        cout<<a<<endl;
        cout<<b<<endl;
        return min(a,b);
        
    }
};
