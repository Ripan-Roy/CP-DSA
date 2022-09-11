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
        if(y%x!=0)
        {
            cout << 0 << " " << 0 << "\n";
        }
        else
        {
            ll a = y/x;
            cout << 1 << " " << a << "\n";
        }

    }

    return 0;
}