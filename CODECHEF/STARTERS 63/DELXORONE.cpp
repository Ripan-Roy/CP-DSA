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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll count = 0;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    ll MAX = 0;
    for(auto it : mp)
    {
        MAX = max(MAX, it.second);
    }
    ll ans = n - MAX - mp[0];
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