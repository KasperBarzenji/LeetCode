class Solution {
public:
    int romanToInt(string s) {
        vector<string> chars;
        unordered_map<char, int> map = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;

        // Iterate through the string
        for (auto it = s.begin(); it != s.end(); ++it) {
            int currentVal = map[*it];
            
            // If not the last element and the current value is smaller than the next character's value
            if (it + 1 != s.end() && currentVal < map[*(it + 1)]) {
                total -= currentVal;  // Subtract the current value
            } else {
                total += currentVal;  // Add the current value
            }
        }

        return total;
    }
};