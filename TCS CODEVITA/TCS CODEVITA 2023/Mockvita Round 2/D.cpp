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

typedef vector<ll> vi;
typedef pair<ll, ll> pii;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> oSet;

#define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
#define RFOR(i, b, a) for (ll i = (b)-1; i >= (a); --i)
#define VIN(i, n) FOR(i, 0, n)
#define RVIN(i, n) RFOR(i, n, 0)
#define PB push_back
#define MP make_pair
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((ll)(x).size())
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
ll findMax(ll n, vector<ll> &gains, vector<ll> &prefSum, ll k, ll total)
{
    ll ans = 0;
    for (ll i = 0; (i + k - 1) < n; i++)
    {
        ll totGain, curGain, curr;

        if (i == 0)
        {
            totGain = prefSum[i + k - 1];
            curGain = gains[i + k - 1];
        }
        else
        {
            totGain = prefSum[i + k - 1] - prefSum[i - 1];
            curGain = gains[i + k - 1] - gains[i - 1];
        }

        curr = total - curGain + totGain;
        ans = max(ans, curr);
    }
    return ans;
}

void find_val(ll totalToken, vector<pair<ll, string>> &list, vector<string> &ans)
{
    ll maxVal = -1;
    for (auto &it : list)
    {
        if (it.first >= maxVal and totalToken >= it.first)
        {
            maxVal = it.first;
            ans.push_back(it.second);
        }
    }
}
vector<string> convertToArr(string &str)
{
    vector<string> ans;
    stringstream ss(str);
    string s;
    while (ss >> s)
    {
        ans.push_back(s);
    }
    return ans;
}
map<string, ll> mpStr(string &str)
{
    map<string, ll> mp;
    vector<string> arr = convertToArr(str);

    for (auto &it : arr)
    {
        auto pos = it.find(':');
        ll price = stoi(it.substr(pos + 1));
        string good = it.substr(0, pos);
        mp[good] = price;
    }
    return mp;
}
void helper()
{
    ll n;
    cin >> n;
    vector<ll> tokens(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> tokens[i];
    }
    vector<ll> claims(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> claims[i];
    }
    ll k;
    cin >> k;
    string temp;
    getline(cin, temp);
    getline(cin, temp);
    vector<pair<ll, string>> list;
    map<string, ll> mp = mpStr(temp);
    for (const auto &it : mp)
    {
        list.push_back({it.second, it.first});
    }
    sort(list.begin(), list.end(), greater<pair<ll, string>>());
    vector<ll> gains(n, 0);
    vector<ll> prefSum(n);
    prefSum[0] = tokens[0];
    if (claims[0] == 1)
    {
        gains[0] = tokens[0];
    }
    else
    {
        gains[0] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (claims[i] == 1)
        {
            gains[i] = gains[i - 1] + tokens[i];
        }
        else
        {
            gains[i] = gains[i - 1];
        }

        prefSum[i] = prefSum[i - 1] + tokens[i];
    }
    // cout << "Gains: ";
    // for (auto &it : gains)
    // {
    //     cout << it << " ";
    // }
    ll totalToken = gains[n - 1];
    totalToken = findMax(n, gains, prefSum, k, totalToken);
    vector<string> ans;
    find_val(totalToken, list, ans);
    //cout << totalToken << endl;
    sort(ans.begin(), ans.end());
    ll sz = ans.size();
    for (ll i = 0; i < sz; i++)
    {
        cout << ans[i];
        if (i != sz - 1)
        {
            cout << " ";
        }
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
    for (ll t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        helper();
    }
    // #ifndef ONLINE_JUDGE
    //     runTime();
    // #endif
    return 0;
}