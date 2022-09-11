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
        ll x;
        cin >> x;
        if ((x / 10) > 100)
        {
            cout << x / 10 << "\n";
        }
        else
        {
            cout << 100 << "\n";
        }
    }
    return 0;
}