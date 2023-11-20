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

ll dfs(vector<vector<ll>> &arr, vector<vector<ll>> &vis, ll i, ll j, ll n, ll m)
{
    if (i < 0 || i >= n || j < 0 || j >= m || arr[i][j] == 0 || vis[i][j])
    {
        return 0;
    }
    vis[i][j] = 1;
    ll vol = arr[i][j];
    vol += dfs(arr, vis, i + 1, j, n, m);
    vol += dfs(arr, vis, i - 1, j, n, m);
    vol += dfs(arr, vis, i, j + 1, n, m);
    vol += dfs(arr, vis, i, j - 1, n, m);
    return vol;
}

void helper()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> arr(n, vector<ll>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && arr[i][j])
            {
                ll vol = dfs(arr, vis, i, j, n, m);
                ans = max(ans, vol);
            }
        }
    }
    cout << ans << "\n";
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