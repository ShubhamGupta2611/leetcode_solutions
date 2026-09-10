class MinStack {
    vector<int> arr;
    vector<int> min;
public:
    MinStack() {
        
    }
    void push(int value) {
        arr.push_back(value);
        if(min.size()==0){
            min.push_back(value);
        }
        else{
            if(min.back()>value){
                min.push_back(value);
            }
            else{
                min.push_back(min.back());
            }
        }
    }
    
    void pop() {
        arr.pop_back();
        min.pop_back();
    }
    
    int top() {
        return arr.back();
    }
    
    int getMin() {
        return min.back();
    }
       
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna