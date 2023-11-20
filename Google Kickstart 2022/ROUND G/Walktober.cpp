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
}

int main()
{
    fastIO;
    ll ts = 1, te;
    cin >> te;
    while (ts <= te)
    {
        ll m, n, p;
        cin >> m >> n >> p;
        vector<vector<ll>> arr(m, vector<ll>(n));
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll sum = 0;
        vector<ll> ans(m, 0);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[j] = max(ans[j], arr[i][j]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (ans[i] > arr[p - 1][i])
            {
                sum += ans[i] - arr[p - 1][i];
            }
        }
        cout << "Case #" << ts << ": " << sum << "\n";
    }
    return 0;
}