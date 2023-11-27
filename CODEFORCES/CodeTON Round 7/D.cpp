// Author: Ripan-Roy
// Created: 2023-11-25
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
#define RALL(x) (x).rbegin(), (x).rend()
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
void processQueries(ll n, ll q, vector<ll> &arr, vector<pair<ll, pair<ll, ll>>> &queries, vll &prefixSum, unordered_map<ll, ll> &prefixSumIndex)
{
    for (ll i = 0; i < q; ++i)
    {
        ll op = queries[i].first;

        if (op == 1)
        {
            ll s = queries[i].second.first;
            if (prefixSumIndex.find(s) != prefixSumIndex.end())
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            ll idx = queries[i].second.first;
            ll val = queries[i].second.second;

            for (ll j = idx; j <= n; ++j)
            {
                prefixSum[j] += (val - arr[idx - 1]);
                prefixSumIndex[prefixSum[j]] = j;
            }
            arr[idx - 1] = val;
        }
    }
}

void helper()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n);
    for (ll j = 0; j < n; ++j)
    {
        cin >> arr[j];
    }

    vll prefixSum(n + 1, 0);
    unordered_map<ll, ll> prefixSumIndex;
    for (ll i = 1; i <= n; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
        prefixSumIndex[prefixSum[i]] = i;
    }
    vector<pair<ll, pair<ll, ll>>> queries(q);
    for (ll j = 0; j < q; ++j)
    {
        ll op;
        cin >> op;

        if (op == 1)
        {
            ll s;
            cin >> s;
            queries[j] = make_pair(op, make_pair(s, 0));
        }
        else
        {
            ll idx, val;
            cin >> idx >> val;
            queries[j] = make_pair(op, make_pair(idx, val));
        }
    }

    processQueries(n, q, arr, queries, prefixSum, prefixSumIndex);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastIO();
    ll tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        helper();
    }
#ifndef ONLINE_JUDGE
    runTime();
#endif
    return 0;
}
