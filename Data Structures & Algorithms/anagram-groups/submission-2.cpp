#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> grouped;
        unordered_map<string, vector<string>> test;
        for (string& w : strs) {
            string key = w;
            sort(key.begin(), key.end());
            test[key].push_back(w);
        }
        for (const auto& [k, v] : test) {
            grouped.push_back(v);
        }
        return grouped;
    }
};
