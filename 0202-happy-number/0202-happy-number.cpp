class Solution {
public:
    bool isHappy(int n) {
        if (n < 0) { return false; }

        unordered_set<int> seen;

        while (n != 1 && !seen.count(n)) {
            seen.insert(n);

            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            n = sum;
        }
        return n == 1;
    }
};