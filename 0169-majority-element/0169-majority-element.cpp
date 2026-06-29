class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k=nums.size()/2;
        map<int,int> ans;
        for (int i:nums){
            ans[i]++;
        }
        for(auto it:ans){
            if(it.second>k){
                return it.first;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna