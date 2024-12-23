class MyStack {
public:
    queue<int> stackQueue;
    queue<int> memoryQueue;
    MyStack() {
    }
    
    void push(int x) {
        while(!stackQueue.empty()) {
            memoryQueue.emplace(stackQueue.front());
            stackQueue.pop();
        }
        stackQueue.push(x);
        while(!memoryQueue.empty()) {
            stackQueue.emplace(memoryQueue.front());
            memoryQueue.pop();
        }
    }
    
    int pop() {
        int val = stackQueue.front();
        stackQueue.pop();
        return val;
    }
    
    int top() {
        return stackQueue.front();
    }
    
    bool empty() {
        return stackQueue.empty();
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