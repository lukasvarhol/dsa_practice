class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0;
        for (int i{}; i < int(sizeof(uint32_t)) * 8; ++i){
            counter += (n & (1 << i)) >> i;
            //printf("%d\n", counter);
        }
        return counter;
    }
};
