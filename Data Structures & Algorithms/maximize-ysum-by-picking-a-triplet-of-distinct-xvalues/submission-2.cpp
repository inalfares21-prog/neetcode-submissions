class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        unordered_map<int,int>mp;
        for(int i=0;i<x.size();i++){
            mp[x[i]]=max(mp[x[i]],y[i]);
        }
        priority_queue<int,vector<int>,greater<int>>q;
        for(const auto &[key,val]:mp){
            q.push(val);
            if(q.size()>3)q.pop();
        }
        int res=0;
        if(q.size()<3)return -1;
        while(q.size()>0){
            res+=q.top();
            q.pop();    
        }
        return res;
        
        
    }
};