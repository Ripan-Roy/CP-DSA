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

bool compare(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    return a.second > b.second;
}

void helper()
{
    ll n;
    cin >> n;
    vector<ll> arr1;
    vector<ll> arr2;
    unordered_map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        arr1.push_back(x);
        arr2.push_back(y);
        mp[arr1[i]].push_back(arr2[i]);
    }
    // ll res = 0;
    // ll cur = 0;
    // for(int i = 0; i < n; i++)
    // {
    //     cout << arr[i].first << " " << arr[i].second << "\n";
    // }
    ll res = 0;
    for (int i = 1; i < n + 1; i++)
    {
        sort(mp[i].begin(), mp[i].end(), greater<ll>());
    }
    for(int i = 1; i < n + 1; i++)
    {
        ll size = mp[i].size();
        for(int j = 0; j < i and j < size;j++)
        {
            res += mp[i][j];
        }
    }
    cout << res << "\n";
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