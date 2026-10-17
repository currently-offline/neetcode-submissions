#include <cctype>
#include <string>
class Solution {
public:
    bool isPalindrome(const string& s) {
        int i = 0, j = int(s.size() - 1);
        while (i < j) {
            unsigned char a = s[i];
            unsigned char b = s[j];
            if (!isalnum(a)) {
                i++;
                continue;
            }
            if (!isalnum(b)) {
                j--;
                continue;
            }
            if (tolower(a) == tolower(b)) {
                i++;
                j--;
            } else return false;
        }
        return true;
    }
};
