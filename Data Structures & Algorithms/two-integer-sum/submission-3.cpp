class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i{}; i < nums.size(); ++i){
            int diff = target - nums[i];

            auto it = seen.find(diff);

            if (it != seen.end()) {
                return {it->second, i};
            } else {
                seen.insert({nums[i], i});
            }
        }
        return {-1, -1};
    }
};
