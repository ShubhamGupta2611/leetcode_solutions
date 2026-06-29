class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int min=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]-min>max)
            max=prices[i]-min;
            if(prices[i]<min)
            min=prices[i];
        }
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna