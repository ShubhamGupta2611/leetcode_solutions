class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>m;
        priority_queue<int>p;
        //int c=0;
        int ans=0;
        for(char x:tasks){
            m[x]++;
        }
        for(auto it:m){
            p.push(it.second);
        }
        queue<pair<int,int>>q;
        while(!p.empty()||!q.empty()){
            ans++;
            if(!q.empty()&&q.front().second==ans){
                p.push(q.front().first);
                q.pop();
            }
            if(p.empty()){
                continue;
            }
            int x=p.top();
            p.pop();
            x--;
            if(x>0){
            q.push({x,ans+n+1});
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna