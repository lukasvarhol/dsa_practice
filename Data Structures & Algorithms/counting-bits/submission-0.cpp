class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> out;
        for (int i{}; i <= n; ++i){
            int currentCount = 0;
            int currentValue = i;
            while (currentValue != 0){
                currentValue &= currentValue - 1;
                currentCount++;
            }
            out.push_back(currentCount);
        }
        return out;
    }
};
