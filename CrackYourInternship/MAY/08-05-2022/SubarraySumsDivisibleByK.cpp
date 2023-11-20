//Subarray Sums Divisible by K
//Link - https://leetcode.com/problems/subarray-sums-divisible-by-k/

T.C - O(n)
S.C - O(1)

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> counts(k, 0);
        int sum = 0;
        for(auto it: nums)
        {
            sum += ((it%k)+k)%k;
            counts[sum%k]++;
        }
        int result = counts[0];
        for(auto it: counts)
        {
            result += (it*(it-1))/2;
        }
        return result;
    }
};