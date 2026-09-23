class MinStack {
public:
    MinStack() {

    }
    
    void push(int val) {
        s.push(val);
        if (mS.empty()){
            mS.push(val);
            return;
        } 
        if (val <= mS.top()) mS.push(val);
        
    }
    
    void pop() {
        if (s.empty() || mS.empty()) return;
        if (s.top() == mS.top()) mS.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        // return *min_element(stack.begin(), stack.end()); Not O(1) !!!!
        return mS.top();
    }

private: 
::stack<int, vector<int>> s{};
::stack<int, vector<int>> mS{};

};
