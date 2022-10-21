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
    ll m, n;
    cin >> n >> m;
    // vector<pair<ll, ll>> arr(m);
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
    }
    if (n - m >= 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout <<"NO\n";
    }
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