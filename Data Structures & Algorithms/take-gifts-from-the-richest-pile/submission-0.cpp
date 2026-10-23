class Solution {
public:

    long long pickGifts(vector<int>& gifts, int k) {
        long long res=0;
        priority_queue<int>pq;
        for(auto&num:gifts){
            pq.push(num);
        }
        int i=0;
        while(pq.size()>0&&i<k){
          int c=sqrt(pq.top());
          pq.pop();
          pq.push(c);
          i++;
        }
        while(pq.size()>0){
            res=res+pq.top();
            pq.pop();
        }
        return res;
        
    }
};