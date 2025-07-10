class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0;
        int candidate = 0;

        for (int num : nums) {
            std::cout << num << std::endl;
            if (vote == 0) {
                candidate = num;
            }

            vote += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};