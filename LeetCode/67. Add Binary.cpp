class Solution {
public:
    string addBinary(string a, string b) {
        while(a.size() < b.size())
            a = "0" + a;
        while(a.size() > b.size())
            b = "0" + b;
        int memo = 0;
        string res = "";
        for(int i = a.size()-1; i>=0; i--)
        {
            int tmp = (a[i] - '0') + (b[i] - '0') + memo;
            res = to_string(tmp % 2) + res;
            memo = tmp/2;
        }

        if(memo > 0) res = to_string(memo) + res;

        return res;

    }
};
