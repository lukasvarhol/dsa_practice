class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> out;
        int p = 4;
        int accessPos = 2;
        for (int i{}; i <= n; ++i){
            if (i < 2){
                out.push_back(i);
            } else if(p << 1 == i || p == i) {
                accessPos = p;
                p <<= 1;
                out.push_back(1);
            } else {
                printf("%d\n", accessPos);
                out.push_back(out.at(i - accessPos) + 1);
            }
        }
        return out;
    }
};

