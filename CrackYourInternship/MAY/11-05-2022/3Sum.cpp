class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> arr;
        sort(nums.begin(), nums.end());
        // nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (i != j && j != k && k != i && (nums[i] + nums[j] + nums[k] == 0))
                    {
                        arr.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
    }
};