class KthLargest {
    priority_queue <int,vector<int>,greater<int>>q;
    int c;
public:
    KthLargest(int k, vector<int>& nums) {
        c=k;
        for(int i:nums){
            q.push(i);
        }
        while(q.size()>k)q.pop();

        
    }
    
    int add(int val) {
        q.push(val);
        if(q.size()>c)q.pop();
        return q.top();
        
    }
};
