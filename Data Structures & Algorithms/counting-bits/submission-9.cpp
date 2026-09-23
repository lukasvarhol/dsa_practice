class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> out;
        out.resize(n+1);
        int p = 4;
        int accessPos = 2;
        for (int i{}; i <= n; ++i){
            if (i < 2){
                out.at(i) = i;
            } else if(p << 1 == i || p == i) {
                accessPos = p;
                p <<= 1;
                out.at(i) = 1;
            } else {
                printf("%d\n", accessPos);
                out.at(i) = (out.at(i - (p >> 1)) + 1);
            }
        }
        return out;
    }
};

