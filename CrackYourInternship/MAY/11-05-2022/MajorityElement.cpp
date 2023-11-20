//Majority Element 
//Link - https://leetcode.com/problems/majority-element/

T.C - O(nlogn)
S.C - O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int ans = nums[nums.size()/2];
        return ans;
    }
};