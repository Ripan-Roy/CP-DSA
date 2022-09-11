#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll solve()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    for (auto it : mp)
    {
        arr.push_back(it.second);
    }

    if (arr.size() == 1)
    {
        cout << "YES\n";
        return 0;
    }
    sort(arr.begin(), arr.end());
    if (arr[arr.size() - 1] > arr[arr.size() - 2])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}