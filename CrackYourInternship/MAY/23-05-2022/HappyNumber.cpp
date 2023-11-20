//happy Number
//Link - https://leetcode.com/problems/happy-number/
T.C - O(n)
S.C - O(n)

class Solution {
public:
    int sum(int num)
    {
        int sum = 0;
        while(num)
        {
            int rem = num % 10;
            sum += rem * rem;
            num /= 10;
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        if(n <= 0)
        {
            return false;
        }
        unordered_set<int> s;
        while(s.find(n) == s.end())
        {
            s.insert(n);
            n = sum(n);
            if(n == 1)
            {
                return true;
            }
        }
        return false;
    }
};