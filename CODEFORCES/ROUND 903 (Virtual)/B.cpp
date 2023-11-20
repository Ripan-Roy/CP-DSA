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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "YES\n";
        return;
    }
    ll minEl = min({a, b, c});
    ll count = 0;
    while (a != minEl)
    {
        a -= minEl;
        count++;
        if (count > 3 || a <= 0 || b <= 0 || c <= 0)
        {
            cout << "NO\n";
            return;
        }
    }
    while (b != minEl)
    {
        b -= minEl;
        count++;
        if (count > 3 || a <= 0 || b <= 0 || c <= 0)
        {
            cout << "NO\n";
            return;
        }
    }
    while (c != minEl)
    {
        count++;
        c -= minEl;
        if (count > 3)
        {
            cout << "NO\n";
            return;
        }
    }

    if (a == b && b == c)
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
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
