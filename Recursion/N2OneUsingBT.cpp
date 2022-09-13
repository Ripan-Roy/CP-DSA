#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper(ll i, ll n)
{
    if (i > n)
        return;
    helper(i + 1, n);
    cout << i << "\n";
}

int main()
{
    fastIO;
    ll n;
    cin >> n;
    helper(1, n);
    return 0;
}