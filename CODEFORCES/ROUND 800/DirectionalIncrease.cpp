#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        ll prefSum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            prefSum += arr[i];
        }
    }

    return 0;
}