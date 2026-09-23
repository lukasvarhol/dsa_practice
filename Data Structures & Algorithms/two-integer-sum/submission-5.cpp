class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i{}; i < nums.size(); ++i){
            int n = nums[i];
            int diff = target - n;

            auto it = seen.find(diff);

            if (it != seen.end()) {
                return {it->second, i};
            } else {
                seen.insert({n, i});
            }
        }
        return {-1, -1};
    }
};
