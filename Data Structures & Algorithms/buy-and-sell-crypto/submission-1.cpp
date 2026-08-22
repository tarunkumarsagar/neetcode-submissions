class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int maxi = 0;
        // for(int i = 0; i < prices.size()-1; i++){
        //     for(int j = i + 1; j < prices.size(); j++){
        //         int prof = prices[j]-prices[i];
        //         maxi = max(maxi,prof);
        //     }
        // }
        // return maxi;
        int n = prices.size();
        int minpr = prices[0];
        int profit = 0;

        for(int i = 1; i < n; i++){
            int gain = prices[i] - minpr;
            
            profit = max(gain,profit);
            minpr = min(minpr,prices[i]);
        }
        return profit;

    }
};
