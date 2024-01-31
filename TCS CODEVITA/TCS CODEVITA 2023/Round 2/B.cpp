// Author: Ripan-Roy
// Created: 2024-01-19
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
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
typedef pair<ll, pair<ll, ll>> pll;
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

ll minCost(vector<vll> &grid, pair<ll, ll> &start, pair<ll, ll> &end)
{
    ll n = grid.size();
    ll m = grid[0].size();
    vector<vll> dp(n + 1, vll(m + 1, INF));

    dp[start.F][start.S] = grid[start.F - 1][start.S - 1];
    FOR(i, start.F, n + 1)
    {
        FOR(j, start.S, m + 1)
        {
            if (i > start.F)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i - 1][j - 1]);
            }
            if (j > start.S)
            {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i - 1][j - 1]);
            }
        }
    }
    if (dp[end.first][end.second] == INF) 
    {
        return -1;
    }
    return dp[end.first][end.second];
}

void helper()
{
    ll n, m;
    cin >> n >> m;
    vector<vll> matrix(n, vector<ll>(m));
    FOR(i, 0, n)
    {
        FOR(j, 0, m)
        {
            cin >> matrix[i][j];
        }
    }
    pair<ll, ll> start, end;
    cin >> start.F >> start.S >> end.F >> end.S;
    cout << minCost(matrix, start, end);
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