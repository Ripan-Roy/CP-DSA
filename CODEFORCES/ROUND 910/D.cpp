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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n), brr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    for (auto &it : brr)
    {
        cin >> it;
    }

    ll low = min(arr[0], brr[0]);
    ll high = max(arr[0], brr[0]);

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += abs(arr[i] - brr[i]);
        ll mini = min(arr[i], brr[i]);
        ll maxi = max(arr[i], brr[i]);

        low = max(low, mini);
        high = min(maxi, high);
    }
    if (low > high)
    {
        ans += abs(low - high) * 2;
    }
    cout << ans << "\n";
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
