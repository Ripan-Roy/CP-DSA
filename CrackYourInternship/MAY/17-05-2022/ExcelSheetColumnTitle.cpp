// Excel Sheet Column Title
// Link - https://leetcode.com/problems/excel-sheet-column-title/
// BruteForce Approach
T.C - O(n) 
S.C - O(1)

class Solution
{
public:
    string convertToTitle(int n)
    {
        string res;
        char tmp;
        while (n)
        {
            n = n - 1;
            tmp = 'A' + n % 26;
            res = tmp + res;
            n = n / 26;
        }
        return res;
    }
};