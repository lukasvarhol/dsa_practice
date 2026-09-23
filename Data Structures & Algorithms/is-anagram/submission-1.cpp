class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> sVector(s.begin(), s.end());
        vector<char> tVector(t.begin(), t.end());
        size_t size  = sVector.size();
        if (size != tVector.size()) return false;

        std::array<unsigned char, 256> seen;
        for (int i{}; i < size; ++i){
            ++seen[sVector[i]];
            --seen[tVector[i]];
        }

        for (char c : seen) {
            if (c != 0) return false;
        }
        return true;
    }
};
