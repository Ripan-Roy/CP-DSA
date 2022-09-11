#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (abs(x - y) == 1)
        {
            cout << 1 << "\n";
        }
        else if (abs(x - y) % 2 == 0)
        {
            cout << abs(x - y) / 2 << "\n";
        }
        else if (abs(x - y) % 2 == 1)
        {
            cout << abs(x - y) / 2 + 1 << "\n";
        }
    }
    return 0;
}