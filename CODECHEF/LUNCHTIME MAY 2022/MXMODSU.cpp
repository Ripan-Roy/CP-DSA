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
        ll n, m;
        cin >> n >> m;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll mx = *max_element(arr.begin(), arr.end());
        ll maxElement = INT_MIN;
        vector<ll> diff;
        // for (int j = 0; j < n; j++)
        //  {
        //      ll temp = arr[i] + arr[j] + ((arr[i] - arr[j]) % m);
        //      maxElement = max(maxElement, temp);
        //  }
        for (int i = 0; i < n; i++)
        {
            diff.push_back((m - (mx - arr[i])) % m);
        }
        for (int i = 0; i < n; i++)
        {
            maxElement = max(maxElement, (diff[i] + arr[i] + mx));
        }
        cout << maxElement << "\n";
    }
    return 0;
}