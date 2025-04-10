// Author: Ripan-Roy
// Created: 2024-10-19
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

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define RFOR(i, b, a) for (int i = (b) - 1; i >= (a); --i)
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

inline int char_to_digit(char ch)
{
    return ch - '0';
}

bool is_peak(string &num)
{
    int n = num.length();

    if (num == "0")
        return false;
    if (num.back() == '0')
        return false;
    if (n == 1)
        return true;

    if (n % 2 == 0)
        return false;

    int k = n / 2;

    for (int i = 0; i < k; i++)
    {
        if (char_to_digit(num[i + 1]) >= char_to_digit(num[i]))
            return false;
    }

    for (int i = k + 1; i < n; i++)
    {
        if (char_to_digit(num[i + 1]) <= char_to_digit(num[i]))
            return false;
    }

    return true;
}

void helper()
{
    ll a, b, m;
    cin >> a >> b >> m;
    ll count = 0;

    ll firstMultiple = (a % m == 0) ? a : (a + m - a % m);

    if (firstMultiple > b)
    {
        cout << 0 << "\n";
        return;
    }

    for (ll i = firstMultiple; i <= b; i += m)
    {
        string num = to_string(i);
        if (is_peak(num))
        {
            cout << "number->> " << num << endl;
            count++;
        }
    }
    cout << count << "\n";
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
        cout << "Case #" << t << ": ";
        helper();
    }
#ifndef ONLINE_JUDGE
    runTime();
#endif
    return 0;
}
