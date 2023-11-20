#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const int mod = 1e9 + 7;
const int N = 2e5 + 5;

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
    for (auto &it : arr)
    {
        cin >> it;
    }
    ll maxEl = *max_element(arr.begin(), arr.end());
    ll minEl = *min_element(arr.begin(), arr.end());
    ll sum = maxEl + minEl;
    unordered_map<ll, ll> mp;
    for (auto it : arr)
    {
        mp[it]++;
    }
    if(mp.size() == 1)
    {
        cout << "YES\n";
        return;
    }
    if(mp.size() > 2)
    {
        cout << "NO\n";
        return;
    }
    if(abs(mp[maxEl] - mp[minEl]) < 2)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        cout << "NO\n";
        return;
    }
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
