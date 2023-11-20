//Maximum Product of Three Numbers
//Link - https://leetcode.com/problems/maximum-product-of-three-numbers/

T.C - O(nlogn)
S.C - O(1)

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int n = nums.size();
        int ans1 = nums[0] * nums[1] * nums[2];
        int ans2 = nums[0] * nums[n-1] * nums[n-2];
        if(ans1>ans2)
        {
            return ans1;
        }
        return ans2;
    }
};