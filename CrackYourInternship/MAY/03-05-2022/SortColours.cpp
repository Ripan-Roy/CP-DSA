//Sort Colors

// link to the problem : https://leetcode.com/problems/sort-colors/

BruteForce Solution:
T.C - O(n)


class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                arr.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                arr.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==2)
            {
                arr.push_back(nums[i]);
            }
        } 
        nums = arr;
    }
    
};
