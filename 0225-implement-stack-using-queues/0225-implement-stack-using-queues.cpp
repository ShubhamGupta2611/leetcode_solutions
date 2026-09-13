class MyStack {
    queue<int> st;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        
        for(int i=0;i<st.size()-1;i++){
            int p=st.front();
            st.pop();
            st.push(p);
        }
        int x=st.front();
        st.pop();
        return x;
    }
    
    int top() {
        int p;
        for(int i=0;i<st.size();i++){
            p=st.front();
            st.pop();
            st.push(p);
        }
        return p;
    }
    
    bool empty() {
        return st.empty();
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

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna