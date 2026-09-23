class Solution {
public:
    int getSum(int a, int b) {
        int partial;
        int carry;

        while (b != 0){
            partial = a ^ b;
            carry = (a & b) << 1;
            a = partial;
            b = carry;
        }

        return a;
    }
};
