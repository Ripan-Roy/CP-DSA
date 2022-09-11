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
        ll even = 0, odd = 0;
        vector<ll> arr(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        for (auto it : mp)
        {
            if (it.second >= 2)
            {
                it.second--;
                if (it.second % 2 == 0)
                {
                    even += 2;
                }
                else
                {
                    odd++;
                }
            }
        }
        if (odd % 2 == 0)
        {
            even += odd;
        }
        else
        {
            even += odd + 1;
        }
        cout << n - even << "\n";
    }
    return 0;
}