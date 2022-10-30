#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        ll g = -1e18;
        if (i > 1)
        {
            g = v[i] - v[0];
        }
        ll h = -1e18;
        if (i < n - 1)
        {
            h = v[n - 1] - v[i - 1];
        }
        ll res = max(g, h);
        ans = max(ans, v[i] - v[i - 1] + res);
    }
    cout << ans << "\n";
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}