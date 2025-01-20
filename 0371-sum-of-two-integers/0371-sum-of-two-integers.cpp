class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int carry = (a & b) << 1; // Calc carry over
            a = a ^ b; // XOR
            b = carry; // repeat till no carry over
        }
        return a;
    }
};