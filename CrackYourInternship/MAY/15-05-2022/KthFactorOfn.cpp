//Kth Factor of n
//Link - https://leetcode.com/problems/kth-factor-of-n/
//Brute Force Solution
T.C - O(n)
S.C - O(n)

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factor;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                factor.push_back(i);
            }
        }
        if(factor.size()<k) return -1;
        return factor[k-1];
    }
};