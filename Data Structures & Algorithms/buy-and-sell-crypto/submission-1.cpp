class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = INT_MAX, b=0, n= prices.size();
         for (int i = 0; i < n; i++) {
            s = min(s, prices[i]);
            b = max(b, prices[i] - s);
        }
            return b;
    }
};