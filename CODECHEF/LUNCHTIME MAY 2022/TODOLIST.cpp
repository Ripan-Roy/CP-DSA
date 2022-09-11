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
        ll count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=1000)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}