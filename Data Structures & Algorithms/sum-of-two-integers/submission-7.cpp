class Solution {
public:
    int getSum(int a, int b) {
        int result{};
        
        int partial_sum = a ^ b;
        int carry = a & b;

        result = partial_sum + (carry << 1);
        return result;
    }
};
