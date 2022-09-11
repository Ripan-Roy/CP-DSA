#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
    ll x, y;
    x = str1.size();
    y = str2.size();
    if (y == 1 && t[0] == 'a')
    {
        cout << 1 << "\n";
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == 'a')
        {
            cout << -1 << "\n";
            break;
        }
        else
        {
            ll res = pow(2, str1.size());
            cout << res << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}