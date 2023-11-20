//Merge Sorted Array
//Link - https://leetcode.com/problems/merge-sorted-array/
T.C - O(nlogn)
S.C - O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(remove(nums1.begin()+m, nums1.end(), 0),nums1.end());
        for(auto &it: nums2){
            nums1.push_back(it);
        }
        sort(nums1.begin(),nums1.end());
    }
};