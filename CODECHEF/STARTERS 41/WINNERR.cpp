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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (max(a, b) > max(c, d))
        {
            cout << "Q\n";
        }
        else if (max(a, b) < max(c, d))
        {
            cout << "P\n";
        }
        else
        {
            cout << "TIE\n";
        }
    }
    return 0;
}