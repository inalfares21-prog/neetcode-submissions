class Solution {
public:
    int maxSatisfied(vector<int>& cust, vector<int>& grumpy, int minutes) {
        int res=0;
        int sum=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0)sum+=cust[i];
        }
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1)res+=cust[i];
        }
        int count=res;
        for(int i=minutes;i<cust.size();i++){
            if(grumpy[i]==1)count+=cust[i];
            if(grumpy[i-minutes]==1)count-=cust[i-minutes];
            res=max(res,count);
        }
        return sum+res;
        
    }
};