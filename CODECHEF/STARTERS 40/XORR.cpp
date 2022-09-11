#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr1(n), arr2(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if ((arr1[i] ^ arr1[j]) == (arr2[i] ^ arr2[j]))
                {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }

    return 0;
}