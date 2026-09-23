class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        seen.reserve(nums.size());

        for (int i{}; i < nums.size(); ++i){
            int diff = target - nums[i];

            if (seen.find(diff) != seen.end()) {
                return {seen[diff], i};
            } else {
                seen.insert({nums[i], i});
            }
        }
        return {-1, -1};
    }
};
