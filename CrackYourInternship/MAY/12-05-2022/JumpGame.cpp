//Jump Game
//Link - https://leetcode.com/problems/jump-game/
T.C - O(n)
S.C - O(1)
class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int maxjump = 0;
        for(int i = 0;  i < nums.size(); i++){
            if(i > maxjump){
                return false;
            }
            maxjump = max(maxjump, i + nums[i]);
        }
        return true;
    }
};     