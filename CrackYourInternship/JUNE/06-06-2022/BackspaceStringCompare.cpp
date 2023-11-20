//Backspace String Compare
//Link - https://leetcode.com/problems/backspace-string-compare/
//T.C - O(n)
//S.C - O(1)
class Solution {
public:    
    string getString(string &str) {
        int n=str.length(), count=0;
        string result="";
        for(int i=n-1; i>=0; i--) {
            char ch=str[i];
            if(ch=='#') 
                count++;
            else {
                if(count>0)
                    count--;
                else {
                    result+=ch;
                }                     
            }
        }
        return result;        
    }
    
    bool backspaceCompare(string S, string T) {
        return getString(S)==getString(T);
    }
};