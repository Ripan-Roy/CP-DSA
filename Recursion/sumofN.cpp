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

int helper(ll n)
{
    if (n == 0)
        return 0;
    return n + helper(n - 1);
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    cout << helper(t);
    return 0;
}