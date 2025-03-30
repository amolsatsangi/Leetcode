class MinStack {
private:
    stack<int> st;
    stack<int> st1;
public:
    
    void push(int val) {
        st.push(val);
        if(st1.empty() || val<=st1.top())
          st1.push(val);
    }
    
    void pop() {
   if(st.top()==st1.top()) st1.pop();
	    st.pop();
    }  
    int top() {
        if(st.empty())
            return -1;
        return st.top();
    }
    
    int getMin() {
         if(st.empty())
            return -1;
        return st1.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
