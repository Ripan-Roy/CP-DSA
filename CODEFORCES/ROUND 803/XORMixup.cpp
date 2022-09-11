#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        vector<ll> prefXor(n, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                prefXor[i] = arr[i];
            }
            else
            {
                prefXor[i] = prefXor[i - 1] ^ arr[i];
            }
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (prefXor[i] == arr[i])
            {
                ans = arr[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}