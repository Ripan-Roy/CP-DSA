// Author: Ripan-Roy
// Created: 2023-12-05
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
    string str;
    cin >> str;
    int col = str[1] - '0';
    char row = str[0];
    vector<vector<string>> chessBoard;
    chessBoard.PB({"a8", "b8", "c8", "d8", "e8", "f8", "g8", "h8"});
    chessBoard.PB({"a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7"});
    chessBoard.PB({"a6", "b6", "c6", "d6", "e6", "f6", "g6", "h6"});
    chessBoard.PB({"a5", "b5", "c5", "d5", "e5", "f5", "g5", "h5"});
    chessBoard.PB({"a4", "b4", "c4", "d4", "e4", "f4", "g4", "h4"});
    chessBoard.PB({"a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3"});
    chessBoard.PB({"a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2"});
    chessBoard.PB({"a1", "b1", "c1", "d1", "e1", "f1", "g1", "h1"});

    int rowIdx, colIdx;
    for (int i = 0; i < 8; ++i)
    {
        auto it = find(chessBoard[i].begin(), chessBoard[i].end(), str);
        if (it != chessBoard[i].end())
        {
            rowIdx = i;
            colIdx = it - chessBoard[i].begin();
            break;
        }
    }
    for (int i = 0; i < 8; ++i)
    {
        if (i != rowIdx)
        {
            cout << chessBoard[i][colIdx] << "\n";
        }
    }
    for (int j = 0; j < 8; ++j)
    {
        if (j != colIdx)
        {
            cout << chessBoard[rowIdx][j] << "\n";
        }
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
#ifndef ONLINE_JUDGE
    runTime();
#endif
    return 0;
}