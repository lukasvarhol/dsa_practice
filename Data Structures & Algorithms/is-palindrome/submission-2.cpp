class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for (int i{}; i < s.length(); ++i){
            if (isalnum(s[i])) 
                cleaned.push_back(tolower(s[i]));
        }

        string rev = cleaned;
        reverse(rev.begin(), rev.end());
        return rev == cleaned;
    }
};
