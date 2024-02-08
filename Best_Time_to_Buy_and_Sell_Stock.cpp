class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSoFar=prices[0],best=0;
        for(int i=1;i<prices.size();i++){
            minSoFar = min(minSoFar,prices[i]);
            best=max(best,prices[i]-minSoFar);
        }
        return best;
    }
};
// Title: Best Time to Buy and Sell Stock
