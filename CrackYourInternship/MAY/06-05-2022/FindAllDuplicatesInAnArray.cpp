//Find All Duplicates In An Array
//Link - https://leetcode.com/problems/find-all-duplicates-in-an-array/

T.C - O(n)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> arr;
        if(nums.size()==0)
        {
            return {};
        }
        for(auto it: nums)
        {
            mp[it]++;
        }
        for(auto it: mp)
        {
            if(it.second>1)
            {
                arr.push_back(it.first);
            }
        }
        return arr;
    }
};