//Missing Number
//Link - https://www.hackerrank.com/challenges/missing-number/problem
//Brute Force Solution
T.C - O(n)
S.C - O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
        }
        return n * (n+1) / 2 - sum;
    }
};