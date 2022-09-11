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
        set<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr.insert(x);
        }
        if ((n - arr.size()) % 2 == 0)
        {
            cout << arr.size() << "\n";
        }
        else
        {
            cout << arr.size() - 1 << "\n";
        }
    }
    return 0;
}