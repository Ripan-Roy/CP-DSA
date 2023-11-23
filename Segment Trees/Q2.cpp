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
#define REP(i, n) FOR(i, 0, n)
#define REPR(i, n) RFOR(i, n, 0)
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

class info {
public:
    int open, close, full;
    info() : open(0), close(0), full(0) {}

    info(int open, int close, int full) : open(open), close(close), full(full) {}
};

info merge(info left, info right){
    int newFull = left.full + right.full + min(left.open, right.close);
    int newOpen = left.open + right.open - min(left.open, right.close);
    int newClose = left.close + right.close - min(left.open, right.close);
    return info(newOpen, newClose, newFull);
}
void buildTree(int ind, int low, int high, string &s, vector<info> &seg){
    if(low == high)
    {
        seg[ind].open = s[low] == '(';
        seg[ind].close = s[low] == ')';
        seg[ind].full = 0;
        return;
    }
    int mid = (low + high) >> 1;
    buildTree(2 * ind + 1, low, mid, s, seg);
    buildTree(2 * ind + 2, mid + 1, high, s, seg);
    seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
}
info query (int idx, int low, int high, int l, int r, vector<info> &seg)
{
    if(r < low || high < l) return info();
    if(low >= l && high <= r) return seg[idx];
    int mid = (low + high) >> 1;
    info left = query(2 * idx + 1, low, mid, l, r, seg);
    info right = query(2 * idx + 2, mid + 1, high, l, r, seg);
    return merge(left, right);
}
void helper()
{
    string str;
    cin >> str;
    ll n = str.length();
    vector<info> seg(4 * n);
    buildTree(0, 0, n - 1, str, seg);
    ll q;
    cin >> q;
    while(q--){
        ll l, r;
        cin >> l >> r;
        l--, r--;
        info ans = query(0, 0, n - 1, l, r, seg);
        cout << ans.full * 2 << "\n";
    }
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