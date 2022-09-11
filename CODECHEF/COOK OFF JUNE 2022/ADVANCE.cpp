#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (y <= x + 200 && y >= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}