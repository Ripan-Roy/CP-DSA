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
    ll a, b;
    cin >> a >> b;
    ll m, n;
    cin >> m >> n;
    ll t;
    ll temp = n / m + 1;
    ll var = n % (m + 1);
    if (var == 0)
    {
        t = temp * a * m;
    }
    else
    {
        t = temp * a * m;
        t += min(var * b, var * a);
    }
    ll z = min(n * a, n * b);
    cout << min(z, t) << "\n";
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