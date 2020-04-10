class MinStack {
    vector<pair<int, int>> st;
    int m;
    int size;
public:
    /** initialize your data structure here. */
    MinStack() {
        
        m = 2147483647;
        size=0;
    }
    
    void push(int x) {
        if(size == 0 ) m = x;
        else m = min(m, x);
        st.push_back(pair<int, int>(x, m));
        size++;
    }
    
    void pop() {
        st.pop_back();
        size--;
        if(size != 0) m = st[size-1].second;
    }
    
    int top() {
        return st[size-1].first;
    }
    
    int getMin() {
        return st[size-1].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
