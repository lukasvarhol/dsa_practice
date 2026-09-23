class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        const int size = sizeof(uint32_t) * 8;
        const int msb = size - 1;
        uint32_t rev = 0;
        uint32_t mask;
        uint32_t front;
        uint32_t end;
        for (int i{}; i < (size / 2); ++i) {
            mask = 1U << (msb - i);
            front = (n & mask) >> (msb - i); 
            end = (n >> i) & 1U;
            rev |= ((front << i) | (end << (msb - i)));
        }
        return rev;
    }
};
