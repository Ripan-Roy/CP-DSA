#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll count = 0;
        ll temp;
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i + 1] == arr[i])
            {
                count++;
                temp = arr[i];
                flag = true;
                if (count == 3)
                {
                    break;
                }
            }
        }
        if (flag == false)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << temp << "\n";
        }
    }
    return 0;
}