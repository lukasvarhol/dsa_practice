class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = nums.size();

        for (int i{}; i < nums.size(); ++i){
            range += i - nums[i];
        }
        return range;
    }
};
