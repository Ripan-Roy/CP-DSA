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
    ll x, y;
    cin >> x >> y;
    if (a / x == b / y)
    {
        cout << "BOTH\n";
    }
    else if(a / x < b / y)
    {
        cout << "CHEF\n";
    }
    else
    {
        cout << "CHEFINA\n";
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