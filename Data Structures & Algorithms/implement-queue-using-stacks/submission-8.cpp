class MyQueue {
public:
stack<int> main;
stack<int> help;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(main.size()>0){
            help.push(main.top());
            main.pop();
        }
        main.push(x);
        while(help.size()>0){
            main.push(help.top());
            help.pop();
        }
        
    }
    
    int pop() {
        int c=main.top();
        main.pop();
        return c;
        
    }
    
    int peek() {
        return main.top();
        
    }
    
    bool empty() {
        return main.size()==0;
        
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