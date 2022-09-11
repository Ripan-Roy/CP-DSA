#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll ts = 1;
    ll te;
    cin >> te;
    while (ts <= te)
    {
        ll n, m;
        double ans = 0, median = 0;
        cin >> n >> m;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if (m > 1)
        {
            ll temp = m - 1;
            for (int i = n - 1; i >= n - 1 - temp + 1; i--)
            {
                ans += arr[i];
            }
        }
        ll size = n - m + 1;
        if (size % 2 == 1)
        {
            ans += arr[size / 2];
        }
        else
        {
            median += arr[size / 2] + arr[size / 2 - 1];
            ans += (median) / (2.0);
        }
        cout << "Case #" << ts << ": " << fixed << setprecision(6) << ans << "\n";
        ts++;
    }
    return 0;
}