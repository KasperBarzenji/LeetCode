#define CARRY 10

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }

        int tmp = x;
        int rev = 0;
        while (x > 0)
        {
            if (rev > (INT_MAX - x % CARRY) / CARRY) {
                return false;
            }

            rev = rev * CARRY + x % CARRY;
            x /= CARRY;
        }

        return rev == tmp;
    }
};