class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for (string& s : strs) {
            ans += std::to_string(s.length());
            ans += '#';
            ans += s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        size_t i = 0;
        size_t j = 0;
        while (i < s.size()) {
            j = s.find('#', i);
            int length = std::stoi(s.substr(i, j - i));
            ans.push_back(s.substr(j+1, length));
            i = j + length + 1;
        }
        return ans;
    }
};
