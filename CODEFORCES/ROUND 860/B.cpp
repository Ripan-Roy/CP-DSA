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
    ll m;
    map<ll, ll> mp;
    cin >> m;
    ll count = 1;
    for (int i = 0; i < m; i++, count++)
    {
        ll n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            mp[x] = count;
        }
    }
    vector<int> arr(m, 0);
    for (auto it : mp)
    {
        if (it.second <= m)
        {
            arr[it.second - 1] = it.first;
        }
    }
    bool flag = true;
    for (auto it : arr)
    {
        if (it == 0)
        {
            flag = false;
        }
    }
    if (!flag)
    {
        cout << "-1\n";
    }
    else
    {
        for (auto it : arr)
        {
            cout << it << " ";
        }
        cout << "\n";
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