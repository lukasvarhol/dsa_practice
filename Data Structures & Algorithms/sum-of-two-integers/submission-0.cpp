class Solution {
public:
    int getSum(int a, int b) {
        int result{};
        int carry{0};
        for (size_t i{}; i < sizeof(int) * 8; ++i){
            int mask = 1 << i;
            int a_ = (a & mask) >> i;
            int b_ = (b & mask) >> i;
            result |= (a_ ^ b_ ^ carry) << i;
            carry = (a_&b_) | carry&(a_^b_);
        }
        return result;
    }
};
