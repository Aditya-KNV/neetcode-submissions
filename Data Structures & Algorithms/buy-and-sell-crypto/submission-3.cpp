class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMax = 0; int maxVal = INT_MIN;
        if(prices.size() == 0 || prices.size() == 1) return 0;
        if(prices.size() == 2) return max((prices[1] - prices[0]), 0);
        vector<int> maxi(prices.size());
        maxi[prices.size() - 1] = prices[prices.size() - 1];
        for(int i = prices.size() - 2; i >= 0; i--) {
            maxi[i] = max(maxi[i+1], prices[i]);
            maxVal = max(maxVal, maxi[i] - prices[i]);
        }
        return maxVal;
    }
};
