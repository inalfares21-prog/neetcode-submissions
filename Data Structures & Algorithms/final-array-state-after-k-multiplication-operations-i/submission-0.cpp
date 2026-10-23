class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        for(int i=0;i<nums.size();i++){
            q.push({nums[i],i});
        }
        for(int i=0;i<k;i++){
            pair<int,int>c;
            c=q.top();
            q.pop();
            c.first*=multiplier;
            q.push(c);
        }
        vector<int>res(nums.size());
        while(q.size()>0){
           
            res[q.top().second]=q.top().first;
            q.pop();
        }
        return res;

        
    }
};