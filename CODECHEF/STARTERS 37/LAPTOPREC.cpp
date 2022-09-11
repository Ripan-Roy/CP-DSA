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
        vector<ll> hash(11);

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            hash[x]++;
        }
        vector<ll> arr = hash;
        sort(arr.begin(), arr.end());
        if (arr[10] > arr[9])
        {
            for (ll i = 0; i <= 10; i++)
            {
                if (hash[i] == arr[10])
                {
                    cout << i << "\n";
                }
            }
        }
        else
        {
            cout << "CONFUSED\n";
        }
    }
    return 0;
}