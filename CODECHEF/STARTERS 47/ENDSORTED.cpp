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
        vector<ll> arr(n + 1);
        ll index1 = 0, indexn = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                index1 = i;
            }
            if (arr[i] == n)
            {
                indexn = i;
            }
        }
        ll ans = 0;
        if (index1 == 0 && indexn == n - 1)
        {
            ans = 0;
        }
        else if (index1 == 0 && indexn != n - 1)
        {
            ans = n - 1 - indexn;
        }
        else if (index1 != 0 && indexn == n - 1)
        {
            ans = index1;
        }
        else
        {
            ans = n - 1 - indexn + index1;
            if (indexn < index1)
            {
                ans--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}