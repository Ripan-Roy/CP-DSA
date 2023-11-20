
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 1;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int s;
            cin >> s;
            for (int j = 0; j < s; j++)
            {
                int a;
                cin >> a;
                m[a] = c;
            }
            c++;
        }
        vector<int> v(n, 0);
        for (auto i : m)
        {
            if (i.second <= n)
            {
                v[i.second - 1] = i.first;
            }
        }
        int b = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                b = 0;
            }
        }
        if (b == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
