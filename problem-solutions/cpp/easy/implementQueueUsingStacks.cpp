class MyQueue {
public:
    stack<int> queueStack;
    stack<int> memoryStack;
    MyQueue() {
    }
    
    void push(int x) {
        while(!queueStack.empty()) {
            memoryStack.push(queueStack.top());
            queueStack.pop();
        }
        queueStack.push(x);
        while(!memoryStack.empty()) {
            queueStack.push(memoryStack.top());
            memoryStack.pop();
        }
    }
    
    int pop() {
        if(!queueStack.empty()) {
            int val = queueStack.top();
            queueStack.pop();
            return val;
        }
        return -1;
    }
    
    int peek() {
        if(!queueStack.empty()) {
            return queueStack.top();
        }
        return -1;        
    }
    
    bool empty() {
        return queueStack.empty();
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