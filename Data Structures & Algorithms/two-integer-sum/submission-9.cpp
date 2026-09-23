class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        seen.reserve(nums.size());

        for (int i{}; i < nums.size(); ++i){
            int n = nums[i];
            int diff = target - n;

            if (seen.find(diff) != seen.end()) {
                return {seen[diff], i};
            } else {
                seen.insert({n, i});
            }
        }
        return {-1, -1};
    }
};
