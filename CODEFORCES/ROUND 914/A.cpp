// Author: Ripan-Roy
// Created: 2023-12-09
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
    ll a, b; 
    cin >> a >> b;
    ll xk, yk; 
    cin >> xk >> yk;
    ll xq, yq; 
    cin >> xq >> yq;

    vll dRow = {a, -a};
    vll dCol = {b, -b};

    vector<pll> king;
    vector<pll> queen;

    VIN(i, 2)
    {
        VIN(j, 2)
        {
            ll x = xk + dRow[i];
            ll y = yk + dCol[j];
            king.push_back({x, y});
        }
    }

    VIN(i, 2)
    {
        VIN(j, 2)
        {
            ll x = xq + dRow[i];
            ll y = yq + dCol[j];
            queen.push_back({x, y});
        }
    }
    if(xk != xq and yk != yq)
    {
        
    }
    // for(auto it : king)
    // {
    //     cout << it.first << " " << it.second << "\n";
    // }
    // cout << "\n";
    // for(auto it : queen)
    // {
    //     cout << it.first << " " << it.second << "\n";
    // }
    // cout << "\n";

    ll count = 0;
    for (auto k : king)
    {
        for (auto q : queen)
        {
            if (k == q)
            {
                count++;
            }
            // if ((k.F == q.S && k.S == q.F) or (k.S == q.F && k.F == q.S))
            // {
            //     count += 2;
            // }
        }
    }

    cout << count << "\n";
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