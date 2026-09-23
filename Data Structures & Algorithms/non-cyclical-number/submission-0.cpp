class Solution {
public:
    bool isHappy(int n){
        std::vector<int> parsedDigits;
        std::unordered_set<int> seen;
        while (n != 1){
            parsedDigits.clear();
            while (n > 0){
                parsedDigits.push_back(n % 10);
                n /= 10;
            }
            n = 0;
            for (int e : parsedDigits){
                n += e*e;
            }
            if (!(seen.insert(n)).second) return false;
        }
        return true;
    }
};
        
