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
        ll n;
        cin >> n;
        ll m;
        cin >> m;
        vector<ll> arr(n);
        ll temp1, temp2;
        if (2 * n > m)
        {
            cout << m << " " << m << "\n";
        }
        else if (2 * n >= m && m % n == 0)
        {
            cout << m << " " << n << "\n";
        }
        else
        {
            ll num = m / 2;
            if (2 * n <= m)
            {
                num = n * 2;
            }
            ll low = INT_MIN;
            for (ll i = n; i <= num; i++)
            {
                ll temp = m / i;
                ll currDiff = (i * temp) - i;
                if (currDiff > low)
                {
                    low = currDiff;
                    temp1 = i;
                    temp2 = temp * i;
                }
            }
            cout << temp1 << " " << temp2 << "\n";
        }
    }
    return 0;
}