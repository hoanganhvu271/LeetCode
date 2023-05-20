class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        s = "#" + s;
        int dp[n+1][n+1];
        memset(dp, 0, sizeof(dp));

        int p1 = 1, p2 = 1;

        for(int i = 1; i<= n; i++)
            dp[i][i] = 1;
        int res = 1;
        for(int len = 2; len <= n; len++)
        {
            for(int i = 1; i<= n-len+1; i++)
            {
                int j = i+len-1;
                if(len == 2 && s[i] == s[j])    dp[i][j] = 1;
                else
                {
                    if(dp[i+1][j-1] == 1 && s[i] == s[j])
                        dp[i][j] = 1;
                }

                if(dp[i][j] == 1)
                {
                    if(j-i+1 > res)
                    {
                        res = j-i+1;
                        p1 = i;
                        p2 = j;
                    }
                }
            }
        }

        string ans = s.substr(p1, p2-p1+1);

        return ans;
    }
};
