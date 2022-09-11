#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
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
        ll prefSum = 0;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            prefSum = prefSum + arr[i];
            if (prefSum % 2 == 0)
            {
                count++;
            }
        }
    }
    return 0;
}