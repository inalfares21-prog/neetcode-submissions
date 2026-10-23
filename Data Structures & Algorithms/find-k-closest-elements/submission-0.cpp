class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>q;
        for(int i:arr){
            q.push({abs(x-i),i});
            if(q.size()>k)q.pop();
        }
        vector<int>res(k);
        for(int i=k-1;i>-1;i--){
            res[i]=q.top().second;
            q.pop();
        }
        sort(res.begin(),res.end());
        return res;

    }
};