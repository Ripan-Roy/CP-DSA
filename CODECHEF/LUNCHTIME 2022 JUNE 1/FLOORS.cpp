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
        ll anx, any;
        if (x % 10 == 0)
        {
            anx = x / 10;
        }
        else
        {
            anx = x / 10 + 1;
        }
        if (y % 10 == 0)
        {
            any = y / 10;
        }
        else
        {
            any = y / 10 + 1;
        }
        if (anx > any)
        {
            cout << anx - any << "\n";
        }
        else
        {
            cout << any - anx << "\n";
        }
    }
    return 0;
}