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
    ll w, h;
    cin >> w >> h;
    ll k1;
    cin >> k1;
    vector<ll> x1(k1);
    for (int i = 0; i < k1; i++)
    {
        cin >> x1[i];
    }
    ll k2;
    cin >> k2;
    vector<ll> x2(k2);
    for (int i = 0; i < k2; i++)
    {
        cin >> x2[i];
    }
    ll k3;
    cin >> k3;
    vector<ll> y1(k3);
    for (int i = 0; i < k3; i++)
    {
        cin >> y1[i];
    }
    ll k4;
    cin >> k4;
    vector<ll> y2(k4);
    for (int i = 0; i < k4; i++)
    {
        cin >> y2[i];
    }
    sort(x1.begin(), x1.end());
    sort(x2.begin(), x2.end());
    sort(y1.begin(), y1.end());
    sort(y2.begin(), y2.end());
    ll maxLength = max((x1[k1 - 1] - x1[0]), (x2[k2 - 1] - x2[0]));
    ll maxWidth = max((y1[k3 - 1] - y1[0]), (y2[k4 - 1] - y2[0]));
    if (maxLength * h > maxWidth * w)
    {
        cout << maxLength * h << "\n";
    }
    else
    {
        cout << maxWidth * w << "\n";
    }
}
long long numberOfWays(long long N)
{
    const int MOD = 1e9 + 7;
    long long dp[N + 1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }
    return dp[N];
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