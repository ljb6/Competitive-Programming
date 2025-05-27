    class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1, _max = 0;
        
        while (r < prices.size()) {
            if (prices[r] < prices[l]) {
                l = r;
            } else {
                _max = max(_max, prices[r] - prices[l]);
            }
            r++;
        }

        return _max;
    }
};