#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 3)
        {
            cout << "-1"
                 << "\n";
            continue;
        }
        if (n % 2 == 1)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << "\n";
            continue;
        }
        cout << "2 3 1 4 ";
        for (int i = 5; i < n + 1; i++)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}