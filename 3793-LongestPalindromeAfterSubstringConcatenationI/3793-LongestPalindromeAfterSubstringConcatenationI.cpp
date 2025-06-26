// Last updated: 6/27/2025, 2:28:58 AM
class Solution {
public:
    bool isPalindrome(const string& str) {
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}
    int longestPalindrome(string s, string t) {
        int maxLength = 0;
        int n = s.size();
        int m = t.size();
        for (int i = 0; i <= n; ++i) {
            for (int j = i; j <= n; ++j) {
                string sub_s = s.substr(i, j - i);
                for (int k = 0; k <= m; ++k) {
                    for (int l = k; l <= m; ++l) {
                        string sub_t = t.substr(k, l - k);
                        string combined = sub_s + sub_t;
                        if (isPalindrome(combined)) {
                            maxLength = max(maxLength, (int)combined.size());
                        }
                    }
                }
            }
        }
        return maxLength;
    }
};