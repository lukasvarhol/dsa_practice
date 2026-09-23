class Solution {
public:
    int getSum(int a, int b) {
        int result{};
        char carry{0};
        for (size_t i{}; i < sizeof(int) * 8; ++i){
            char a_ = (a & (1 << i)) >> i;
            char b_ = (b & (1 << i)) >> i;
            result |= (a_ ^ b_ ^ carry) << i;
            carry = (a_ & b_) | carry&(a_ ^ b_);
        }
        return result;
    }
};
