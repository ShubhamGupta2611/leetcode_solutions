class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        vector<int>left;vector<int>right(nums.size());
        left.push_back(1);
        right[nums.size()-1]=1;
       for(int i=1;i<nums.size();i++){
            left.push_back(nums[i-1]*left[i-1]);
            right[nums.size()-1-i]=nums[nums.size()-i]*right[nums.size()-i];
       }
       for(int i=0;i<nums.size();i++){
        answer.push_back(left[i]*right[i]);
       }
       return answer;}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna