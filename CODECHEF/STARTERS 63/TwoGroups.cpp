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
    ll n;
    cin >> n;
    ll sum1 = 0;
    ll sum2 = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x <= 0)
        {
            sum1 += x;
        }
        else
        {
            sum2 += x;
        }
    }
    cout << abs(abs(sum2) - abs(sum1)) << "\n";
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