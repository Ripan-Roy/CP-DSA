// Chocolate Distribution Problem
// Link - https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/#
T.C.- O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(), a.end());
        long long minElement = INT_MAX;
        long long x = m - 1;
        for (int i = 0; x < n; i++, x++)
        {
            minElement = min(minElement, a[x] - a[i]);
        }
        return minElement;
    }
};

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        long long x;
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }

        long long m;
        cin >> m;
        Solution ob;
        cout << ob.findMinDiff(a, n, m) << endl;
    }
    return 0;