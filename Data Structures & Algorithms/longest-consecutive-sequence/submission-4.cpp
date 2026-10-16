#include <unordered_set>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int ans = 0;
        for (int x : nums) {
            seen.insert(x);
        }
        for (int x : seen) {
            if (seen.count(x - 1)) continue;
            int curr = x;
            int len = 1;
            while (seen.count(curr + 1)) {
                curr++;
                len++;
            }
            ans = max(ans, len);
        }
        return ans;
    }
};
