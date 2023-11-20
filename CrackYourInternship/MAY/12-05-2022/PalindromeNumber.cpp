// Palindrome Number
// Link - https://leetcode.com/problems/palindrome-number/
T.C - O(n) S.C - O(1) 
class Solution
{
public:
    bool isPalindrome(int n)
    {
        int temp = n;
        long long int sum = 0, r;
        while (n > 0)
        {
            r = n % 10;
            sum = (sum * 10) + r;
            n = n / 10;
        }
        if (temp == sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
