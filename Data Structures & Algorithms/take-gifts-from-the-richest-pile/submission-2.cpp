class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>q;
        for(int i:gifts){
            q.push(i);
        }
        for(int i=0;i<k;i++){
            int x=q.top();
            q.pop();
            q.push(sqrt(x));
        }
        int res=0;
        while(q.size()>0){
            res+=q.top();
            q.pop();
        }
        return res;
        
        
    }
};