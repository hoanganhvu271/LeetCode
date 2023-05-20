class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> v;
        v.assign(numRows, {});
        
        int i = 0, j = 0, ok = 0 ;
        if(numRows == 1)    return s;
        while(i < s.length())
        {
            v[j].push_back(s[i]);
            i++;

            if(ok == 0) j++;
            else j--; 

             if(j == numRows-1)
                ok = 1;
            if(j == 0)
                ok = 0;
  
        }

        string res = "";
        for(int i = 0; i< numRows; i++)
        {
            for(auto x : v[i])
                res += x;
        }

        return res;
    }
};
