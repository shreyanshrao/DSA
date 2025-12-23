class Solution {
public:
    bool isPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";

        int maxLen = 0;
        int start = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (isPalindrome(s, i, j) && (j - i + 1 > maxLen)) {
                    start = i;
                    maxLen = j - i + 1;
                }
            }
        }

        return s.substr(start, maxLen);
    }
};