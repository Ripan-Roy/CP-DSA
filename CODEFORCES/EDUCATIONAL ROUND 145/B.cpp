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

bool perfectSquare(ll n)
{
    ll x = sqrt(n);
    return (x * x == n);
}

void helper()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }
    if (perfectSquare(n))
    {
        cout << (int)(sqrt(n)) - 1 << "\n";
    }
    else
    {
        cout << (int)sqrtl(n) << "\n";
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