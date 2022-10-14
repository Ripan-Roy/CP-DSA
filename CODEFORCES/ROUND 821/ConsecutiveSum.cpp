#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fastIo()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll maxSum(ll n, ll k, unordered_map<ll, ll> m)
{
    ll max_sum = 0;
    for (ll i = 0; i < k; i++)
    {
        ll mod = i % k;
        max_sum += m[mod];
    }
    return max_sum;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        unordered_map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            ll mod = i % k;
            if (arr[i] > m[mod])
                m[mod] = arr[i];
        }
        ll ans = maxSum(n, k, m);
        cout << ans << "\n";
    }
    return 0;
}