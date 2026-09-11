class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> wait;
        unordered_map<int,int> max;
        for(int i=0;i<nums2.size();i++){
            while(!wait.empty() && wait.back()<nums2.at(i)){
                max[wait.back()]=nums2.at(i);
                wait.pop_back();
            }
            wait.push_back(nums2.at(i));
        }
        while(!wait.empty()){
            max[wait.back()]=-1;
                wait.pop_back();
        }
        for(int x:nums1){
            ans.push_back(max[x]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna