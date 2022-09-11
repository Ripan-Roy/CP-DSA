#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[200010];
ll dp[200010][5];
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll x;
        cin >> n >> x;
        for (int i = 1; i <= n; ++i)
        {
            cin >> arr[i];
        }
        // for (int i = 1; i <= n; ++i)
        // {
        //     dp[i][0] = dp[i - 1][0] + arr[i];
        //     dp[i][1] = dp[i - 1][1] + arr[i] * x;
        //     dp[i][2] = max(dp[i - 1][2], dp[i - 1][0]) + arr[i];
        //     dp[i][3] = max(dp[i - 1][3], dp[i - 1][1]) + arr[i] * x;
        // }
        for (int i = 2; i <= n; ++i)
        {
            // dp[i][0] = dp[i - 1][0] + arr[i];
            // dp[i][1] = dp[i - 1][1] + arr[i] * x;
            // dp[i][2] = dp[i - 1][2] + arr[i];
            // dp[i][3] = dp[i - 1][3] + arr[i] * x;
            // dp[i][4] = dp[i - 1][4] + arr[i];
            dp[i][0] = max(dp[i - 1][0] + (arr[i - 1] ^ arr[i]), dp[i - 1][1] + ((arr[i - 1] + x) ^ arr[i]));
            dp[i][1] = max(dp[i - 1][0] + (arr[i - 1] ^ (arr[i] + x)), dp[i - 1][1] + ((arr[i - 1] + x) ^ (arr[i] + x)));
        }
        ll ans = max(dp[n][0], dp[n][1]);
        cout << ans << "\n";
    }
    return 0;
}