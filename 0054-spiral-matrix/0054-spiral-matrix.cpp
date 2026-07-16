class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int x=0,y=0,k=matrix[0].size()-1,l=matrix.size()-1;
        while(x<=k||y<=l){
        for(int i=x;i<=k;i++){
            ans.push_back(matrix[y][i]);
        }
        y++;
        if(y>l)
        break;
        for(int i=y;i<=l;i++){
            ans.push_back(matrix[i][k]);
        }
        k--;
        if(x>k)
        break;
        for(int i=k;i>=x;i--){
            ans.push_back(matrix[l][i]);
        }
        l--;
        if(y>l)
        break;
        for(int i=l;i>=y;i--){
            ans.push_back(matrix[i][x]);
        }
        x++;
        if(x>k)
        break;
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna