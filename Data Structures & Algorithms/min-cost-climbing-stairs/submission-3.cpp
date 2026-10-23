class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i=2;
        int c;
        if(cost.size()==1){
            return cost[0];
        }
        else {
            if(cost.size()==2){
                c=min(cost[0],cost[1]);
            return c;
        }
        }
        while(i<cost.size()){
            cost[i]=cost[i]+min(cost[i-1],cost[i-2]);
            c=min(cost[i],cost[i-1]);
            i=i+1;    
        }
        
        return c;
        
    }
};
