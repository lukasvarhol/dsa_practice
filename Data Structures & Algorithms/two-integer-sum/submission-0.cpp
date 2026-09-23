class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> seen;

        for (int i{}; i < nums.size(); ++i){
            int diff = target - nums[i];

            auto it = seen.find(nums[i]);

            if (it != seen.end()) {
                return {it->second, i};
            } else {
                seen.insert({diff, i});
            }
        }
        return {-1, -1};
    }
};
