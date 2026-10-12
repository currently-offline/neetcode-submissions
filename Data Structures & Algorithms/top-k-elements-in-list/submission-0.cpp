class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        for (int x : nums) {
            ++seen[x];
        }
        vector<vector<int>> most(nums.size() + 1);
        for (const auto& [n, v] : seen) {
            most[v].push_back(n);
        }
        vector<int> ans;
        for (int i = (int)nums.size(); i >= 1; --i) {
            for (int x : most[i]) {
                ans.push_back(x);
                if (ans.size() == k) return ans;
            }
        }
        return {};
    }
};
