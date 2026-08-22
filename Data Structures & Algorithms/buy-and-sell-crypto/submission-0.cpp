class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        for(int i = 0; i < prices.size()-1; i++){
            for(int j = i + 1; j < prices.size(); j++){
                int prof = prices[j]-prices[i];
                maxi = max(maxi,prof);
            }
        }
        return maxi;
    }
};
