//Find Peak Element
//Link - https://leetcode.com/problems/find-peak-element/
//Brute Force Solution 
T.C - O(n)
S.C - O(1)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxElement = *max_element(nums.begin(), nums.end());
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxElement)
            {
                ans = i;
            }
        }
        return ans;
    }
};