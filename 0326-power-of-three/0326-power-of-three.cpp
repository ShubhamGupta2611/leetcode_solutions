class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        else if(n<1){
            return false;
        }
        else{
            if(n%3==0)
            return isPowerOfThree(n/3);
            else
            return false;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna