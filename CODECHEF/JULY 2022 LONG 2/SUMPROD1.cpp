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
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll count = 0;
        long long ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count = 0;
            }
            else
            {
                count++;
            }
            ans += count;
        }
        cout << ans << "\n";
    }
    return 0;
}