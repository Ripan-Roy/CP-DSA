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
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 2)
        {
            cout << arr[0] + arr[1] << "\n";
        }
        else
        {
            ll temp = 0, x = 0;
            ll ans = arr[0] + arr[n - 1];
            for (int i = 0; i < n - 1; i++)
            {
                temp = arr[i] + arr[i + 1];
                if (x < temp)
                {
                    x = temp;
                }
            }
            if (ans >= x)
            {
                cout << ans << "\n";
            }
            else
            {
                cout << x << "\n";
            }
        }
    }
    return 0;
}