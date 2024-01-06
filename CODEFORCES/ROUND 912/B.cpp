// Author: Ripan-Roy
// Created: 2023-11-30
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
    vector<vector<ll>> arr(n, vector<ll>(n));
    VIN(i, n)
    {
        VIN(j, n)
        {
            cin >> arr[i][j];
        }
    }
    if (n == 1)
    {
        cout << "YES\n";
        cout << arr[0][0] << "\n";
        return;
    }
    vll row;
    vll temp(n);
    VIN(i, n)
    {
        ll tp = (1LL << 30) - 1;
        VIN(j, n)
        {
            if (i != j)
            {
                tp &= arr[i][j];
            }
        }
        row.PB(tp);
    }
    bool flag = false;
    VIN(i, n)
    {
        VIN(j, n)
        {
            if ((row[i] | row[j]) != arr[i][j] && i != j)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    VIN(i, n)
    {
        cout << row[i] << " ";
    }
    cout << "\n";
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