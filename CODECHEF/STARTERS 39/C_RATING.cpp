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
        if (x == y)
        {
            cout << 0 << "\n";
        }
        else
        {
            ll count = 0;
            for (int i = x; i <= y; i+=8)
            {
                if(i>=y)
                {
                    break;
                }
                count++;
            }
            cout << count << "\n";
        }
    }
    return 0;
}