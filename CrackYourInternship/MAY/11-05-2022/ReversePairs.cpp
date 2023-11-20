//Reverse Pairs
//Link - https://leetcode.com/problems/reverse-pairs/

BruteForce Approach(TLE):

T.C - O(n^2)
S.C - O(n)

class Solution {
public:
    int reversePairs(vector<int>& num) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);      
        vector<long long> nums(num.begin(), num.end());
        long long int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j = i+1;j<nums.size();j++)
            {
                if(i<j && nums[i]>2*nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};

Optimal Approach:
