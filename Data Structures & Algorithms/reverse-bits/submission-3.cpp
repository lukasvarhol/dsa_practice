class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        const int size = sizeof(uint32_t) * 8;
        uint32_t rev = 0;
        for (int i{}; i < (size / 2); ++i) {
            uint32_t mask = 1U << ((size - 1) - i);
            uint32_t front = (n & mask) >> ((size - 1) - i); 
            uint32_t end = (n >> i) & 1U;
            rev |= ((front << i) | (end << ((size - 1) - i)));
        }
        return rev;
    }
};
