//Longest Common Prefix
//Link - https://leetcode.com/problems/longest-common-prefix/
T.C - O(mn)
S.C - O(1)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];A        
        for(int i = 1; i < strs.size(); i++) {
            int j;
            for(j = 0; j < strs[i].size(); j++) 
            {
                if(ans[j] != strs[i][j])
                {
                    break;
                }
            }
            ans = ans.substr(0, j);
            if(ans == "")
            {
                return ans;
            }
        }   
        return ans;
    }
};