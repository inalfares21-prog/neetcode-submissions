class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(int i:stones){
            q.push(i);
        }
        while(q.size()>1){
            int x=q.top();
            q.pop();
            int y=q.top();
            q.pop( );
            if(x-y>0){
                q.push(x-y);
            }
        }
        if(q.size()==0)return 0;
        return q.top();
        
    }
};
