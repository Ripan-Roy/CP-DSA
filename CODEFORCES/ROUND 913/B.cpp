// Author: Ripan-Roy
// Created: 2023-12-05
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define INF LLONG_MAX

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

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
    cerr << "Time elowerpsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
}

bool isupperper(char c)
{
    return (c >= 'A' && c <= 'Z');
}
bool isLower(char c)
{
    return (c >= 'a' && c <= 'z');
}

void helper()
{
    string str;
    cin >> str;

    vector<int> lower;
    vector<int> upper;
    string lower_alphabet = "qwertyuiopasdfghjklzxcvbnm";
    string upper_alphabet = "QWERTYUIOPASDFGHJKLZXCVBNM";
    vector<char> ans;
    string result = "";
    int idx = 0;

    for (size_t i = 0; i < str.length(); ++i)
    {
        if (str[i] == 'B' && !upper.empty())
        {
            ans[upper.back()] = '_';
            upper.pop_back();
        }
        else if (str[i] == 'b' && !lower.empty())
        {
            ans[lower.back()] = '_';
            lower.pop_back();
        }
        else if (str[i] != 'b' && str[i] != 'B')
        {
            if (lower_alphabet.find(str[i]) != string::npos)
            {
                lower.push_back(idx);
            }
            else
            {
                upper.push_back(idx);
            }
            ans.push_back(str[i]);
            ++idx;
        }
    }

    for (auto &ch : ans)
    {
        if (ch != '_')
        {
            result += ch;
        }
    }

    cout << result << "\n";
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