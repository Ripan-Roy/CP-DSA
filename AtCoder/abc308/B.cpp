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
    ll n, m;
    cin >> n >> m;
    vector<string> c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vector<string> d(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> d[i];
    }
    vector<ll> p(m);
    ll P0;
    cin >> P0;
    for (ll i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    ll ans = 0;
    unordered_map<string, ll> mp;
    for (int i = 0; i < m; i++)
    {
        mp[d[i]] = p[i];
    }
    mp["P0"] = P0;
    for (int i = 0; i < n; i++)
    {
        if (mp.count(c[i]))
        {
            ans += mp[c[i]];
        }
        else
        {
            ans += mp["P0"];
        }
    }
    cout << ans << "\n";
}

int main()
{
    fastIO();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
