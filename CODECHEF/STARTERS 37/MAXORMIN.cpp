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
        vector<ll> arr(n);
        ll count0 = 0, count1 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        ll diff = abs(count0-count1);
        if (count1 > count0)
        {
            cout << 1 << "\n";
        }
        else if (count0 > count1)
        {
            if (diff == 1)
            {
                if ((n - 1) % 2 > 0) 
                {
                    cout << 1 << "\n";
                }

                else
                {
                    cout << 0 << "\n";
                }
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else
        {
            cout << 1 << "\n";
        }
    }

    return 0;
}