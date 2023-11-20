//RemoveDuplicatesFromSortedArray
// Link - https://leetcode.com/problems/remove-duplicates-from-sorted-array/
T.C. - O(n)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
