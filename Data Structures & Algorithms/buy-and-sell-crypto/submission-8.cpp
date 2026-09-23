class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP{};
        int lowest{prices[0]};

        for (int p : prices){
            int profit = p - lowest;
            maxP = profit > maxP ? profit : maxP;
            lowest = p < lowest ? p : lowest;
        }

        return maxP;
    }
};
