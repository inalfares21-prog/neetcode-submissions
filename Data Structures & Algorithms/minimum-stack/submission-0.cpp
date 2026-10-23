class MinStack {
public:
stack<int>s;
stack<int>ms;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);  
        if(ms.size()>0){
            ms.push(min(val,ms.top()));
        }
        else{
            ms.push(val);
        }

    }
    
    void pop() {
        ms.pop();
        s.pop();
        
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        return ms.top();
        
    }
};
