class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int e : nums){
            if(!(seen.insert(e)).second) return true;
        }
        return false;
    }
};