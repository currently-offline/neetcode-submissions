class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        if (s.size() != t.size()) return false;
        int counts[26] = {};
        for (char c : s) {
            counts[c - 'a']++;
        }
        for (char c : t) {
            counts[c - 'a']--;
            if (counts[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};
