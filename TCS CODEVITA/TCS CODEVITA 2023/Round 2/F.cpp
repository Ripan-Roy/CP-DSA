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

static bool comp(pll &d, pll &e)
{
    if (d.S == e.S)
    {
        return d.F < e.F;
    }
    return d.S > e.S;
}

bool findComb(vll &arr, ll height, vll &freq)
{
    vector<ll> dp(height + 1, -1);
    dp[0] = 0;
    FOR(i, 1, height + 1)
    {
        for (auto it : arr)
        {
            if (i - it >= 0 && dp[i - it] != -1)
            {
                dp[i] = max(dp[i], (dp[i - it] + 1));
            }
        }
    }
    if (dp[height] == -1)
    {
        return false;
    }
    else
    {
        while (height)
        {
            for (auto it : arr)
            {
                if (height - it >= 0 && dp[height] == dp[height - it] + 1)
                {
                    height -= it;
                    freq[it]++;
                    break;
                }
            }
        }
    }
    return true;
}
void helper()
{
    ll target;
    cin >> target;
    vll arr(5);
    VIN(i, 5)
    {
        cin >> arr[i];
    }
    ll size = 1e4 + 1;

    vll freq(size + 1, 0);

    bool result = findComb(arr, target, freq);

    if (result)
    {
        vector<pll> taken;
        FOR(i, 1, size)
        {
            if (freq[i])
            {
                taken.PB({i, freq[i]});
            }
        }

        sort(taken.begin(), taken.end(), comp);
        for (auto it : taken)
        {
            if (it != taken.back())
            {
                cout << it.F << " ";
            }
            else
            {
                cout << it.F;
            }
        }
    }
    else
    {
        cout << "Impossible";
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