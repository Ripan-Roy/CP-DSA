#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll ans = INT_MAX;
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            count = count + ((arr[i] + x - 1) / x);
        }
        ans = min(ans, count);
        count = arr[0];
        for (ll i = 1; i < n; i++)
        {
            count = max(count, arr[i]);
        }
        ans = min(ans, count);
        cout << ans << "\n";
    }
    return 0;
}