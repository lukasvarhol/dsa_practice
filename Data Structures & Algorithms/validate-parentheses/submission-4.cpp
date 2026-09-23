class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> lut {{')','('}, {'}','{'}, {']','['}};
        stack<char> seenBrackets{};
        for (char c : s){
            if (seenBrackets.empty()) {
                seenBrackets.push(c);
                continue;
            }

            auto it = lut.find(c);    
            if (it != lut.end()){
                // char is closing bracket
                if(seenBrackets.top() == it->second){
                    seenBrackets.pop();
                    continue;
                } 
                    
            }
            
            seenBrackets.push(c);
        }

        return seenBrackets.empty();
    }
};
