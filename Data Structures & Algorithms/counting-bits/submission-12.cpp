class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> out;
        out.resize(n+1);
        int p = 4;
        for (int i{}; i <= n; ++i){
            if (i < 2){
                out[i] = i;
            } else if(p << 1 == i || p == i) {
                p <<= 1;
                out[i] = 1;
            } else {
                out[i] = out[i - (p >> 1)] + 1;
            }
        }
        return out;
    }
};

