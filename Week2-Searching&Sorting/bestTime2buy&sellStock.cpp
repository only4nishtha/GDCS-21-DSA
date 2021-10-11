class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int minPrice= INT_MAX, maxProf = INT_MIN;
        for(int i = 0; i < prices.size(); i++)
            minPrice = min(minPrice,prices[i]), maxProf = max(maxProf,prices[i]-minPrice);
        return maxProf;
    }
};