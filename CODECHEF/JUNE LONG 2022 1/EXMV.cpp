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
        ll x, n;
        cin >> x >> n;
        ll ans = (x -1) * ((2*n) - x);
        cout << ans << "\n";
    }
    return 0;
}