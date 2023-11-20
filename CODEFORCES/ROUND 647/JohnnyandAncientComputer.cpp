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
    ll ans = 0;
    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }
    else if (b > a)
    {
        ll count = 0;
        while (a != b)
        {
            if (a % 8 == 0)
            {
                a /= 8;
                count++;
            }
            if (a % 4 == 0)
            {
                a /= 4;
                count++;
            }
            if (a % 2 == 0)
            {
                a /= 2;
                count++;
            }
            if (a % b != 0)
            {
                cout << -1 << "\n";
                return;
            }
        }
        cout << count << "\n";
    }
    else
    {
        swap(a, b);
        ll count = 0;
        while (a != b)
        {
            if (a % 8 == 0)
            {
                a /= 8;
                count++;
            }
            if (a % 4 == 0)
            {
                a /= 4;
                count++;
            }
            if (a % 2 == 0)
            {
                a /= 2;
                count++;
            }
            if (a % b == 1)
            {
                cout << -1 << "\n";
                return;
            }
        }
        cout << count << "\n";
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