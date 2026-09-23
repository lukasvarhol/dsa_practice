class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() - 1;
        for (; last >= 0; --last){
            if (digits[last] != 9){
                ++digits[last];                    
                return digits;
            } else {
                digits[last] = 0;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
