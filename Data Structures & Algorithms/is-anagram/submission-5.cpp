class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::array<unsigned char, 256> seen{};
        for (int i{}; i < s.length(); ++i){
            ++seen[s[i]];
            --seen[t[i]];
        }

        for (char c : seen) {
            if (c != 0) return false;
        }
        return true;
    }
};
