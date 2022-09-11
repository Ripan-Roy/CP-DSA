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
        ll x, y, n, r;
        cin >> x >> y >> n >> r;
        ll prem = 0;
        ll norm = 0;
        if (n * x > r)
        {
            cout << -1 << "\n";
        }
        else
        {
            prem = (r - n * x) / (y - x);
            prem = min(prem, n);
            norm = n - prem;
            cout << norm << " " << prem << "\n";
        }
    }

    return 0;
}