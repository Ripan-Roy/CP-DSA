// Author: Ripan-Roy
// Created: 2023-11-24
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ld long double
#define MOD 1000000007
#define INF LLONG_MAX

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tree<int, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> oSet;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define RFOR(i, b, a) for (int i = (b)-1; i >= (a); --i)
#define VIN(i, n) FOR(i, 0, n)
#define RVIN(i, n) RFOR(i, n, 0)
#define PB push_back
#define MP make_pair
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define F first
#define S second
#define countSetBits(x) __builtin_popcountll(x)

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void runTime()
{
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
}
vll dRow = {0, 1, 0, -1};
vll dCol = {1, 0, -1, 0};
ll bfs(ll n, ll m, vector<vector<ll>> &fort, ll row, ll col)
{
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<ll>> dist(n, vector<ll>(m, 0));

    queue<pair<ll, ll>> q;

    pair<ll, ll> start = {row, col};
    q.push(start);
    vis[row][col] = true;

    while (!q.empty())
    {
        pair<ll, ll> top = q.front();
        q.pop();

        for (ll i = 0; i < 4; i++)
        {
            ll nRow = top.first + dRow[i];
            ll nCol = top.second + dCol[i];
            if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !vis[nRow][nCol] && fort[nRow][nCol] == 0)
            {
                dist[nRow][nCol] = dist[top.first][top.second] + 1;
                vis[nRow][nCol] = true;

                pair<ll, ll> nPair = {nRow, nCol};
                q.push(nPair);
            }
        }
    }
    return dist[m - 1][n - 1];
}
void helper()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> fort(n, vector<ll>(m, 0));
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < m; ++j)
        {
            cin >> fort[i][j];
        }
    }
    ll maxTime = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (fort[i][j] == 0)
            {
                fort[i][j] = 1;
                ll dist = bfs(n, m, fort, 0, 0);
                maxTime = max(maxTime, dist);
                fort[i][j] = 0;
            }
        }
    }
    cout << maxTime + 1;
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    fastIO();
    ll tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        helper();
    }
// #ifndef ONLINE_JUDGE
//     runTime();
// #endif
    return 0;
}