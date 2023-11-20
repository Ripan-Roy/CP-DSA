//Subarray Sum Equals K
//Link - https://leetcode.com/problems/subarray-sum-equals-k/

T.C - O(n)
S.C - O(n)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mp;
        int sum=0;
        int ans=0;
        mp[sum] = 1;
        for(auto it: nums){
            sum += it;
            if(mp.find(sum - k) != mp.end()){
                ans += mp[sum - k];
            }
            mp[sum]++;
        }
        return ans;
    }
};