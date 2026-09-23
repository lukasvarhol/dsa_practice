class Solution {
public:
    int getSum(int a, int b) {
        int partial_sum = a ^ b;
        int carry = a & b;

        return partial_sum + (carry << 1);
    }
};
