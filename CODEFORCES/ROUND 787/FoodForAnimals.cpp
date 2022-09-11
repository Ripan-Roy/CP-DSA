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
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        a = a - x;
        b = b - y;
        if (a >= 0 && b >= 0)
        {
            cout << "YES" << "\n";
        }
        else if (a >= 0 && b < 0)
        {
            c += b;
            if (c >= 0)
            {
                cout << "YES" << "\n";
            }
            else
                cout << "NO" << "\n";
        }
        else if (a < 0 && b >= 0)
        {
            c = c + a;
            if (c >= 0)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
        else
        {
            c = c + a + b;
            if (c >= 0)
                {
                    cout << "YES" <<"\n";
                }
            else
                {
                    cout << "NO" <<"\n";
                }
        }
    }
    return 0;
}