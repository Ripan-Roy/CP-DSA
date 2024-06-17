// Author: Ripan-Roy
// Created: 2024-02-11
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


void helper()
{
    ll n;
    cin >> n;
    vector<pair<ll, pll>> arr(n);
    VIN(i, n)
    {
        cin >> arr[i].S.F >> arr[i].S.S >> arr[i].F;
    }
    priority_queue<pair<ll, pll>, vector<pair<ll, pll>>, greater<pair<ll, pll>>> pq;
    pq.push({0, {0, 0}});
    vector<vector<ll>> dist(n, vector<ll>(3, INF));
    dist[0][0] = 0;
    while (!pq.empty())
    {
        auto [d, p] = pq.top();
        pq.pop();
        if (d > dist[p.F][p.S])
            continue;
        for (int i = 0; i < n; i++)
        {
            if (i == p.F)
                continue;
            ll t = d + abs(arr[i].S.F - arr[p.F].S.F) + abs(arr[i].S.S - arr[p.F].S.S);
            if (t <= arr[i].F)
            {
                if (t < dist[i][0])
                {
                    dist[i][2] = dist[i][1];
                    dist[i][1] = dist[i][0];
                    dist[i][0] = t;
                    pq.push({t, {i, 0}});
                }
                else if (t < dist[i][1])
                {
                    dist[i][2] = dist[i][1];
                    dist[i][1] = t;
                    pq.push({t, {i, 1}});
                }
                else if (t < dist[i][2])
                {
                    dist[i][2] = t;
                    pq.push({t, {i, 2}});
                }
            }
        }
    }    
    cout << dist[n - 1][0] << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastIO();
    ll tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        helper();
    }
#ifndef ONLINE_JUDGE
    runTime();
#endif
    return 0;
}