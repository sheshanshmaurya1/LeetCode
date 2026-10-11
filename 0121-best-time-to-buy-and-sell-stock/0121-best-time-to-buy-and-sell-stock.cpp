//Instead of checking every possible buying day, remember the minimum price encountered so far.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxProfit=0;

        for(int i=1; i<prices.size(); i++){
            if(prices[i]<minPrice)
            minPrice=prices[i];

            int profit=prices[i]-minPrice;

            if(profit>maxProfit)
            maxProfit=profit;

        }
        return maxProfit;
    }
};