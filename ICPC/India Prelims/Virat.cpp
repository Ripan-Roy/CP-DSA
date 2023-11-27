// Author: Ripan-Roy
// Created: 2023-11-26
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
#define INF INT_MAX

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
ll dfs(int node, unordered_map<ll, vll> &adj,vll &dist, int par)
{
    for (int i : adj[node])
    {
        if (i == par)
            continue;
        dist[i] = dist[node] + 1;
        return dfs(i, adj, dist, node);
    }
}

void helper()
{
    ll n;
    cin >> n;
    ll a, b, c;
    cin >> a >> b >> c;
    unordered_map<ll, vector<ll>> adj;
    VIN(i, n)
    {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].PB(v);
        adj[v].PB(u);
    }
    vll dist(n, INT_MAX);
    ll path_ab = dfs(a, adj, dist, -1);
    ll path_ac = dfs(b, adj, dist, -1);
    ll path_cb = dfs(c, adj, dist, -1);

    vll ans = {path_ab, path_ac, path_cb};
    // cout << path_ab << " " << path_ac << " " << path_cb << "\n";
    if (path_ac <= path_ab && path_ac <= path_cb)
    {
        cout << "A\n";
    }
    else if (path_ab <= path_ac && path_ab <= path_cb)
    {
        cout << "B\n";
    }
    else if (path_cb <= path_ab && path_cb <= path_ac)
    {
        cout << "C\n";
    }
    else
    {
        cout << "Draw\n";
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    fastIO();
    ll tc = 1;
    cin >> tc;
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