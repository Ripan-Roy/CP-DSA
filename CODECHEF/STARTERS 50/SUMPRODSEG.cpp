#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = 0;
        for (ll i = 1; i * i <= y; i++)
        {
            if (y % i == 0)
            {
                ll p = min(i, y / i);
                ll q = max(i, y / i);
                ll r = p - 1;
                ll s = x - r;
                if (s <= r)
                {
                    if (s < 0)
                    {
                        r = x;
                        s = 0;
                    }
                    cout << p << " " << q << "\n";
                    cout << min(r, s) << " " << max(r, s) << "\n";
                    ans = 1;
                    break;
                }
                if (ans == 1)
                {
                    break;
                }
            }
            if (ans == 1)
            {
                break;
            }
        }
        if (!ans)
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}