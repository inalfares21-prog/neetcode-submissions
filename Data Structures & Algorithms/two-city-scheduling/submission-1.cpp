class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int count=0;
        int res=0;
        for(int i=0;i<costs.size();i++){
            if(costs[i][1]>costs[i][0]){
                count++;
            }
            if(costs[i][1]<costs[i][0]){
                count--;
            }
            res+=min(costs[i][1],costs[i][0]);
        }
        int j=0;
        if(count==0)return res;
        if(count<0)j=1;
        priority_queue<int>pq ;
        count=abs(count)/2;
        for(int i=0;i<costs.size();i++){
            if(costs[i][j]<costs[i][(j+1)%2]){
                pq.push(-costs[i][j]+costs[i][(j+1)%2]);
            }
            if(pq.size()>count){
                pq.pop();
            }
        }
        while(pq.size()>0){
            res+=pq.top();
            pq.pop();
        }
        return res;
        
        
    }
};