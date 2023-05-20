class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int cnt = 0, ok = 0;
        for(int i = s.size() - 1; i>= 0; i--)
        {
            if(s[i] != ' ')
                ok = 1;
            
            if(s[i] == ' ' && ok == 1)
                break;
            if(ok == 1)
                cnt++;
        }

        return cnt;
    }
};
