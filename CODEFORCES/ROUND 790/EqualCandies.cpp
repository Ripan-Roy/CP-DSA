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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll minElement = arr[0];
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != minElement)
            {
                ans = ans + arr[i] - minElement;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}