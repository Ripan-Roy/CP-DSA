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
        vector<ll> arr1(n);
        vector<ll> arr2(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        ll ans = 0;
        map<pair<ll, ll>, ll> m;
        for (int i = 0; i < n; i++)
        {
            ans = ans + m[{arr2[i], arr1[i]}];
            m[{arr1[i], arr2[i]}]++;
        }
        cout << ans << "\n";
    }
    return 0;
}