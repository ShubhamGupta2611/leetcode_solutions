class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       queue<int>q(tickets.begin(),tickets.end());
       int c=0;
       while(true){
        c++;
        int x=q.front();
        q.pop();
        x--;
        if(k==0&&x==0){
            return c;
        }
        if(x!=0){
            q.push(x);
        }
        if(k==0){
            k=q.size()-1;
        }
        else{
            k--;
        }
        
       }

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna