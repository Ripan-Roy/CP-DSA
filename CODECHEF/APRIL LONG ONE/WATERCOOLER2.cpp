#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y % x == 0)
        {
            cout << (y / x) - 1 << "\n";
        }
        else
        {
            cout << y / x << "\n";
        }
    }
    return 0;
}