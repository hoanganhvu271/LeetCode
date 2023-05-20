class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int nho = 0;
       for(int i = digits.size()-1; i>= 0; i--)
       {
           int tmp = (digits[i] + 1);
            digits[i] = tmp % 10;
            nho = tmp / 10;

            if(nho == 0) break;
       }

       if(nho > 0)
       {
           digits.push_back(digits[digits.size()-1]);
           for(int i = 1; i< digits.size()-1; i++)
           {
               digits[i] = digits[i-1];
           } 

           digits[0] = nho;

       }

       return digits;
    }
};
