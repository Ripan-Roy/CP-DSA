#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (y > x)
        {
            cout << y - x << "\n";
        }
        else if (x > y)
        {
            if ((x - y) % 2 == 0)
            {
                cout << (x - y) / 2 << "\n";
            }
            else
            {
                x++;
                cout << ((x - y) / 2) + 1 << "\n";
            }
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}