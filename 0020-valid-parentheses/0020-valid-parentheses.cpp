class Solution {
public:
    bool isValid(string s) {
        vector<char> arr;
        
        for(char x:s){
            if(arr.size()==0){
                if(x=='}'||x==')'||x==']'){
                    return false;
        }
            }
            if(x=='{'||x=='('||x=='['){
                arr.push_back(x);
            }
            else{
                switch (x){
                    case '}':
                        if(arr.back()=='{'){
                            arr.pop_back();
                        }
                        else{
                            return false;
                        }
                        break;
                    case ']':
                        if(arr.back()=='['){
                            arr.pop_back();
                        }
                        else{
                            return false;
                        }
                        break;
                    case ')':
                        if(arr.back()=='('){
                            arr.pop_back();
                        }
                        else{
                            return false;
                        }
                        break;
                }
            }
        }
        if(arr.size()!=0){
            return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna