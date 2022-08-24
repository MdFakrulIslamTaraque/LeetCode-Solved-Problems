class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0], ans = 0, s = prices.size();
        for(int i=0; i<s; i++)
        {
            mn = min(mn, prices[i]);
            ans = max(prices[i]-mn,ans);
        }
        return ans;
    }
};