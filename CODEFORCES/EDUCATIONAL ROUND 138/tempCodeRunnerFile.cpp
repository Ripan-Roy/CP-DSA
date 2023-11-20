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
    vector<ll> arr1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    vector<ll> arr2(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    vector<pair<ll, ll>> arr3(n);
    for (ll i = 0; i < n; i++)
    {
        arr3[i].first = arr2[i];
        arr3[i].second = arr1[i];
    }
    sort(arr3.begin(), arr3.end());
    // for (ll i = 0; i < n; i++)
    // {
    // cout << arr3[i].second << " " << arr3[i].first << endl;
    // }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr3[i].second;
        arr3[i + 1].second += arr3[i].first;
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