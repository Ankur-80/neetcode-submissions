class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int max_1 = 0;
        for(int j = i+1; j < prices.size();) {
            if(prices[i] > prices[j]) {
                i=j;
                j++;
            }
            else if(prices[i] <= prices[j]) {
                max_1 = max(max_1,prices[j] - prices[i]);
                j++;
            }
        }
        return max_1;
    }
};
