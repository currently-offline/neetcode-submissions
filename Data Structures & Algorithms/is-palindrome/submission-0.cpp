#include <cctype>
#include <string>
#include <vector>
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> words;
        for (const char& c : s) {
            unsigned char u = static_cast<unsigned char>(c);
            if (isalnum(u)) {
                words.push_back(static_cast<char>(tolower(u)));
            }
        }
        int i = 0, j = words.size() - 1;
        while (i < j) {
            if (words[i] == words[j]) {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};
