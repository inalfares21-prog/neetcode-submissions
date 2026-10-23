class MyStack {
public:
queue<int>main;
queue<int>tmp;
    MyStack() {
        
    }
    
    void push(int x) {
        tmp.push(x);
        while(main.size()>0){
            tmp.push(main.front());
            main.pop();
        }
        while(tmp.size()>0){
            main.push(tmp.front());
            tmp.pop();
        }
        
    }
    
    int pop() {
        int c=main.front();
        main.pop();
        return c;
        
    }
    
    int top() {
        return main.front();
        
    }
    
    bool empty() {
        return main.size()==0;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */