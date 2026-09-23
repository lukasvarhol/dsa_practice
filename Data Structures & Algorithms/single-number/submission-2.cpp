class Solution {
public:
    int singleNumber(vector<int>& nums) {
        short result = 0;
        for (int e : nums){
            result ^= e;
        }
        return result;
    }
};
