#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, zeros = 0, count = 0;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                zeros++;
        }
        if (zeros > 0)
            cout << n - zeros << "\n";
        else
        {
            bool check = true;
            for (ll i = 0; i < n - 1; i++)
            {
                if (arr[i] != arr[i + 1])
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                cout << count << "\n";
            }
            else
            {
                cout << n - 2 << "\n";
            }
        }
    }
    return 0;
}