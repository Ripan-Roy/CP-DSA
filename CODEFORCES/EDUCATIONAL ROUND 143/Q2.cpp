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

void helper()
{
    ll n, k;
    cin >> n >> k;
    ll L = 0, R = 1e9;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if(x <= k && k <= y)
        {
            L = max(L, x);
            R = min(R, y);
        }
    }
    if (L == R)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}