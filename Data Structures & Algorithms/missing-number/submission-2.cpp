class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = nums.size();
        while (nums.size() != range + 1){
            nums.push_back(0);
        }

        int sum = 0;
        for (int i{}; i < range + 1; ++i ){
            sum += i;
            sum -= nums[i];
        }
        return sum;
    }
};
