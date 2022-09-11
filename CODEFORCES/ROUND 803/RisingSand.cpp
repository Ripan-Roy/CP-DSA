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
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (k == 1)
            {
                ans = (n - 1) / 2;
            }
            else
            {
                if (arr[i] > (arr[i - 1] + arr[i + 1]))
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}