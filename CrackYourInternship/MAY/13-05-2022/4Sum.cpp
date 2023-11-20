//4Sum
//Link - https://leetcode.com/problems/4sum/
BruteForce Solution (283/289 testcases Passed)
T.C - O(n^4)
S.C - O(n^2)

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> arr;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    for(int l = k+1; l < nums.size(); l++)
                    {
                        if (i != j && j != k && k != l && l!=i && (long long)(nums[i] + nums[j] + nums[k] + nums[l] == target))
                        {
                            arr.push_back({nums[i], nums[j], nums[k], nums[l]});
                        }
                    }
                }
            }
        }
        set<vector<int>> s(arr.begin(), arr.end());
        vector<vector<int>> arr2(s.begin(), s.end());
        return arr2;
    }
};