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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll find1 = d + a - b;
    if (d < b)
    {
        cout << -1 << "\n";
        return;
    }
    if (c > find1)
    {
        cout << -1 << "\n";
        return;
    }
    if (a == c && b == d)
    {
        cout << 0 << "\n";
        return;
    }
    ll n = abs(find1 - c);
    cout << (d - b) + n << "\n";
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