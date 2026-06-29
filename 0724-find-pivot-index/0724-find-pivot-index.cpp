class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=0,r=0;
        int n=nums.size();
        int pivot=0;
        //nums.push_back(0);
        for(int i=1;i<n;i++){
            r+=nums[i];
        }
        while(pivot<n){
        if(l==r){
            return pivot;
        }
        else{
            if(pivot+1>=n){
               l+=nums[pivot];
                pivot++; 
            }
            else{
            r-=nums[pivot+1];
            l+=nums[pivot];
            pivot++;}
        }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna