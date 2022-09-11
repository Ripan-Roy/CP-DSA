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
        ll ans1;
        ll ans2;
        ans1 = (500 - x * 2) + (1000 - (x + y) * 4);
        ans2 = (1000 - y * 4) + (500 - (x + y) * 2);
        if (ans1 > ans2)
            cout << ans1 << "\n";
        else
            cout << ans2 << "\n";
    }
    return 0;
}