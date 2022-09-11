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
        ll n;
        cin >> n;
        if (n / 100 == 0)
        {
            cout << n % 10 << "\n";
        }
        else
        {
            ll min = n % 10;
            n = n / 10;
            while (n)
            {
                if (min > n % 10)
                {
                    min = n % 10;
                }
                n = n / 10;
            }
            cout << min << "\n";
        }
    }
    return 0;
}