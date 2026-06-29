class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            auto it=ans.find(nums[i]);
            if(it==ans.end()){
                ans[nums[i]]=i;    
            }
            else{
                if(abs(it->second-i)<=k){
                    return true;
                }
                else{
                    ans[nums[i]]=i;
                }
            }
        }
        return false;}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna