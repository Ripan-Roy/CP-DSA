Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

Example 1:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

Example 2:
Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

Example 3:
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 

Constraints:
1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6

//Prefix Sum Approach
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefSum(n,0);
        prefSum[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            prefSum[i] = prefSum[i - 1] + nums[i];
        }
        return prefSum;
    }
};

//Changing the input array
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
            nums[i] = nums[i - 1] + nums [i];
        }
        return nums;
    }
};