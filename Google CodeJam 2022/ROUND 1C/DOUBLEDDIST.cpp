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
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        bool flag = true;
        for (ll i = 1; i < n-1; i++)
        {
            ll temp1 = arr[i] - arr[i - 1];
            ll temp2 = arr[i + 1] - arr[i];
            if (((2 * temp1) != temp2) && (temp1 != (2 * temp2)))
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES"<<"\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}