class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;int a;
        int j=height.size()-1;
        int max=0;
        while(i<j){
            if(height[i]<height[j]){
                a=height[i]*(j-i);
                i++;
            }
            else{
                a=height[j]*(j-i);
                j--;
            }
            
            if(a>max){
                max=a;
            }
        }
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna