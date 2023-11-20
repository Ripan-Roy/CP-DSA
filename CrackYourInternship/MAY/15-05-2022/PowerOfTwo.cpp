//Power Of Two
//Link - https://leetcode.com/problems/power-of-two/


//Reminder Method
T.C - O(n)
S.C - O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
      if(n==0) return false;
        while(n%2==0)
        {
            n=n/2;
        }
        if(n==1) return true;
        else return false;
    }
};

//Bit Manipulation
T.C - O(1)
S.C - O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) {
            return false;
        }
        return !(n&(n-1));
    }
};