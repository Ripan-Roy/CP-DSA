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
        ll count = 0;
        if (a < b && a < c && a < d)
        {
            count = 3;
        }
        else if ((a < b && a < c) || (a < b && a < d) || (a < c && a < d))
        {
            count = 2;
        }
        else if (a < b || a < c || a < d)
        {
            count = 1;
        }
        else
        {
            count = 0;
        }
        cout << count << endl;
    }
    return 0;
}