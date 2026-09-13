class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        list<int> ans;
        int x=deck.back();
        deck.pop_back();
        ans.push_front(x);
        while(!deck.empty()){
            int x=deck.back();
            deck.pop_back();
            int l=ans.back();
            ans.pop_back();
            ans.push_front(l);
            ans.push_front(x);
        }
        vector<int> result(ans.begin(),ans.end());
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna