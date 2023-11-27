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


static bool comp1(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.S != b.S)
    {
        return a.S < b.S;
    }
    return a.F > b.F;
}
static bool comp2(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.S != b.S)
    {
        return a.S < b.S;
    }
    return a.F < b.F;
}

void helper()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> cust(n);
    vector<pair<ll, ll>> bags(m);
    VIN(i, n)
    {
        cin >> cust[i].F >> cust[i].S;
    }
    VIN(i, m)
    {
        cin >> bags[i].F >> bags[i].S;
    }
    sort(ALL(cust), comp2);
    sort(ALL(bags), comp1);
    vector<bool> soldBags(m, false);
    ll ans = 0;
    FOR(i, 0, n)
    {
        ll prefWeight = cust[i].F;
        ll prefMoney = cust[i].S;
        FOR(j, 0, m)
        {
            ll curWeight = bags[j].F;
            ll curMoney = bags[j].S;
            if (curMoney <= prefMoney and curWeight > prefWeight and !soldBags[j])
            {
                ans++;
                soldBags[j] = true;
                break;
            }
        }
    }
    cout << ans;
    // for (bool sold : soldBags)
    // {
    //     cout << sold << " ";
    // }
    // cout << "\n";
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