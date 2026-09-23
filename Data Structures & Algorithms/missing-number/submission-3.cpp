class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = nums.size();
        int expectedSum = range * (range + 1) / 2;

        int sum = 0;
        for (int i : nums){
            sum += i;
        }
        return expectedSum - sum;
    }
};
