//Find the Duplicate Number

// link to the problem : https://leetcode.com/problems/find-the-duplicate-number/

BruteForce Solution:
T.C - O(nlogn)
  
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i+1]==nums[i])
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};
