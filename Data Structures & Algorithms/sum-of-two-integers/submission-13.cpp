class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0){
            int partial;
            int carry;

            partial = a ^ b;
            carry = (unsigned(a) & unsigned(b)) << 1;
            a = partial;
            b = carry;
        }

        return a;
    }
};
