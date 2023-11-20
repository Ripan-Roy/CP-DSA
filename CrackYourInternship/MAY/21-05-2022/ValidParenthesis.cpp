//Valid Parenthesis
//Link - https://leetcode.com/problems/valid-parenthesis/
//Using stack
T.C - O(n)
S.C - O(n)

class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> stk;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i] == '{' || s[i] == '[')
            {
                stk.push(s[i]);
            }
            else
            {
                if(stk.empty() || (stk.top()=='(' && s[i]!=')') || (stk.top() == '{' && s[i]!= '}') || (stk.top() == '[' && s[i]!=']'))
                {
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }
};