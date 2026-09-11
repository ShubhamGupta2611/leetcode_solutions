class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<string> num;
        for(string x:tokens){
            if(isdigit(x[x.size()-1])){
                num.push_back(x);
            }
            else{
                int n2=stoi(num.back());
                num.pop_back();
                int n1=stoi(num.back());
                num.pop_back();
                if(x=="+")
                    num.push_back(to_string(n1+n2));
                else if(x=="-")
                    num.push_back(to_string(n1-n2));
                    
                else if(x=="*")
                    num.push_back(to_string(n1*n2));
                    
                else
                    num.push_back(to_string(n1/n2));
                        
                
            }
        }
        return stoi(num.back());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna