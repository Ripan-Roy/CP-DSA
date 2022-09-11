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
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        bool counter = true;
        for (auto it : mp)
        {
            if (it.second % it.first != 0)
            {
                counter = false;
                break;
            }
        }
        if (counter == true)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}