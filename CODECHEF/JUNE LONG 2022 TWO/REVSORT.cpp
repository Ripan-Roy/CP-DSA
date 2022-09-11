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
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = false;
        for (ll i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                if (arr[i] + arr[i + 1] > x)
                {
                    flag = true;
                    break;
                }
                else
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
        if (flag)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}