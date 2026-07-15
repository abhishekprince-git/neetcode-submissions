class Solution {
   public:
    bool ispalindrome(vector<vector<int>> &dp,string s, int i, int j) {
        if (i >= j) {
            return true;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        if (s[i] == s[j]) {
            return dp[i][j] = ispalindrome(dp,s, i + 1, j - 1);
        }
        return false;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));

        int maxlen = INT_MIN;
        int sp = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (ispalindrome(dp,s, i, j) == true) {
                    if (j - i + 1 > maxlen) {
                        maxlen = j - i + 1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp, maxlen);
    }
};
