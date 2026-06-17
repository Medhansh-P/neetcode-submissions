class MyQueue {
private:
    stack<int> f,r;
    int l;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        r.push(x);
        if(f.empty()){
            while(!r.empty()){
                f.push(r.top());
                r.pop();
            }
        }
    }
    
    int pop() {
        if(f.empty()){
            while(!r.empty()){
                f.push(r.top());
                r.pop();
            }
        }
        int top=f.top();
        f.pop();
        return top;
    }
    
    int peek() {
        if(f.empty()){
            while(!r.empty()){
                f.push(r.top());
                r.pop();
            }
        }
        return f.top();
    }
    
    bool empty() {
        return f.empty() && r.empty();
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