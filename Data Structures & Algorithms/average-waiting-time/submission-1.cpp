class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double res=customers[0][1];
        for(int i=1;i<customers.size();i++){
            int c=max(0,customers[i-1][0]+customers[i-1][1]-customers[i][0]);
            customers[i][1]+=c;
            res+=customers[i][1];
        }
        cout<<res;
        double n=customers.size();
        return res/n;
        
    }
};