//Reverse Number
//Link - https://www.hackerrank.com/challenges/reverse-a-number/problem
T.C - O(n)
S.C - O(1)
class Solution {
public:
    int reverse(int x) {
        long long int rev = 0, rem;
        while(x)
        {
            if((rev >INT_MAX/10) || (rev<INT_MIN/10))
            {
                return 0;
            }
            rem = x % 10;
            x = x / 10;
            rev = rev * 10 + rem;
        }
        return rev;
    }
};