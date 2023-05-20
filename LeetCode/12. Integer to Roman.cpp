class Solution {
public:
    string convert1(char c)
    {
       if(c == 'V')
            return "IV";
        if(c == 'L')
            return "XL";
        if(c == 'D')
            return "CD";
        return 0;
    }

    string convert2(char c)
    {
        if(c == 'X')
            return "IX";
        if(c == 'C')
            return "XC";
        if(c == 'M')
            return "CM";
        return 0;
        
    }

    string intToRoman(int num) 
    {
        int d[] = {1000, 100, 10, 1};
        char c[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        int i = 0;
        string res = "";
        while(num > 0)
        {
            if(i > 3)
                break;
            if(num < d[i])
            {
                i++;
                continue;  
            }

            int tmp = num / d[i];
            if(tmp == 4)
            {
                res += convert1(c[2*i-1]);
                num -= 4 * d[i];
            }
            else if(tmp == 9)
            {
                res += convert2(c[2*i-2]);
                num -= 9 * d[i];
            }
            else if(tmp == 5)
            {
                if(i == 1)
                    res += "D";
                else if(i == 2)
                    res += "L";
                else if(i == 3)
                    res += "V";
                
                num -= 5*d[i];

            }
            else if(tmp > 5)
            {
                res += c[2*i-1];
                num -= 5*d[i];
            }
            else
            {
                res += c[2*i];
                num -= d[i];
            }

        }

        return res;
    }
};
