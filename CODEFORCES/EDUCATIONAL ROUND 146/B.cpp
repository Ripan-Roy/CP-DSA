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

ll find(ll l)
{
    for (int i = 2; i * i <= l; i++)
    {
        if (l % i == 0)
        {
            return i;
        }
    }
    return 1;
}

void helper()
{
    ll a, b;
    cin >> a >> b;
    ll GCD = __gcd(a, b);
    if (GCD > 1)
    {
        cout << GCD - 1 + (a / GCD) + (b / GCD) << "\n";
        return;
    }
    ll maxi = max(a, b);
    ll mini = min(a, b);
    cout << mini + find(maxi) - 1 + maxi / find(maxi) << "\n";
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