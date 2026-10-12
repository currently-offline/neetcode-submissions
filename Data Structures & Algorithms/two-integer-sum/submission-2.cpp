#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> test;
        int diff;
        for (int i = 0; i < (int)nums.size(); ++i) {
            diff = target - nums[i];
            auto it = test.find(diff);
            if (it != test.end()) {
                return {it->second, i};
            } else {
                test[nums[i]] = i;
            }
        }
        return {};
    }
};
