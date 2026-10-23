class MyQueue {
public:
queue<int>s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
        
    }
    
    int pop() {
        int t=s.front();
        s.pop();
        return t;
        
    }
    
    int peek() {
        return s.front();
        
    }
    
    bool empty() {
        return s.size()==0;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */