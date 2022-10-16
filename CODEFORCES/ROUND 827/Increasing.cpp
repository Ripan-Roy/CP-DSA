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
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    bool counter = false;
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            counter = true;
            break;
        }
    }
    if (!counter)
        cout << "YES\n";
    else
        cout << "NO\n";
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