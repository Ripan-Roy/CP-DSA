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
void helper()
{
    ll n, beauty;
    cin >> n >> beauty;

    vector<pair<ll, ll>> arr(n);
    vector<ll> brr(n);

    VIN(i, n)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    VIN(i, n)
    {
        cin >> brr[i];
    }

    sort(RALL(arr));
    sort(ALL(brr));

    vector<ll> ans(n);
    ll idx = 0;

    for (ll i = beauty - 1; i >= 0; i--)
    {
        if (arr[i].first > brr[idx])
        {
            ans[arr[i].second] = brr[idx++];
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }

    idx = n - 1;

    for (ll i = beauty; i < n; i++)
    {
        if (arr[i].first > brr[idx])
        {
            cout << "NO\n";
            return;
        }
        else
        {
            ans[arr[i].second] = brr[idx--];
        }
    }

    cout << "YES\n";

    for (ll i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }

    cout << "\n";
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
        // cout << "Case #" << t << ": ";
        helper();
    }
#ifndef ONLINE_JUDGE
    runTime();
#endif
    return 0;
}