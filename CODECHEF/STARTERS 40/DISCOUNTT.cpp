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
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> arr(n);
        ll ncpn = 0;
        ll cpn = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ncpn += arr[i];
            if (arr[i] - y < 0)
            {
                cpn += 0;
            }
            else
            {
                cpn += arr[i] - y;
            }
        }
        cpn = cpn + x;
        if (cpn < ncpn)
        {
            cout << "COUPON" << "\n";
        }
        else
        {
            cout << "NO COUPON" << "\n";
        }
    }
    return 0;
}