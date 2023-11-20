//Add Binary
//Link - https://leetcode.com/problems/add-binary/
T.C - O(n)
S.C - O(1)
class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for(int i=0;i<max(a.length(), b.length());i++)
        {
            int digitA = i<a.length() ? int(a[i] - '0') : 0;
            int digitB = i<b.length() ? int(b[i] - '0') : 0;
            
            int total = digitA + digitB + carry;
            string ans = to_string(total%2);
            res = ans + res;
            carry = total / 2;
        }
        if(carry)
        {
            res = '1' + res; 
        }
        return res;
    }
};