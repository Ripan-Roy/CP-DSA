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
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x - i]++;
    }
    ll total = 0;
    for (auto it : mp)
    {
        total += (it.second) * (it.second - 1) / 2;
    }
    cout << total << "\n";
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
