// Permutations in Array
// Link - https://practice.geeksforgeeks.org/problems/permutations-in-array1747/1/

T.C - O(n)
  
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPossible(long long a[], long long b[], long long n, long long k) {
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        int counter = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[i]>=k)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        Solution ob;
        cout << ob.isPossible(a, b, n, k) << endl;
    }
    return 0;
}
