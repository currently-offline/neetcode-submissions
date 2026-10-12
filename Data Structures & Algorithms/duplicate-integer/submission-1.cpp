#include <algorithm>
#include <vector>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (size_t i = 0; i + 1 < nums.size(); ++i) {
            if (nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};