class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char c : s){
            if (isalnum(c)) 
                cleaned.push_back(tolower(c));
        }
        return cleaned == string(cleaned.rbegin(), cleaned.rend());
    }
};
