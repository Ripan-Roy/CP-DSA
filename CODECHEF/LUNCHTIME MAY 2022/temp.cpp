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
        ll maxElement = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ll temp = arr[i] + arr[j] + ((m - (arr[i] - arr[j])) % m);
                maxElement = max(maxElement, temp);
            }
        }
        cout << maxElement << "\n";
    }
    return 0;
}