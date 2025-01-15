class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> myV(2);
        
        // Return myV if size is less than 2
        if (nums.size() < 2)
        {
            return myV;
        }

        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++) 
            {
                if (nums[i] + nums[j] == target) 
                {
                    myV[0] = i;
                    myV[1] = j;
                    return myV;
                }
            }
        }

        return myV;
    }
};