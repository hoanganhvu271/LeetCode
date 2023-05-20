class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 1;

        map<char, int> mp;
        if(n == 1) return 1;
        mp[s[0]]++;
        mp[s[1]]++;
        int res = 0;
        while(i < n && j >= i && j < n)
        {
            
            while(mp[s[j]] >= 2)
            {
                mp[s[i]] --;
                i++;
            }
            res = max(res, j-i+1);
            j++;
            if(j < n)
                mp[s[j]]++;
            
        }

        return res;
    }
};
