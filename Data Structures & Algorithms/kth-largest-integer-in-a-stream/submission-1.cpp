class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>q;
int c;
    KthLargest(int k, vector<int>& nums) {
        c=k;
        for(int i:nums){
            q.push(i);
            if(q.size()>c)q.pop();
        }


        
    }
    
    int add(int val) {
        q.push(val);
        if(q.size()>c)q.pop();
        return q.top();
        
    }
};
