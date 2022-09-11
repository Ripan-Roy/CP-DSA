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
        // bool counter = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> arr2(arr.begin(), arr.end());
        sort(arr2.begin(), arr2.end());
        if (arr == arr2)
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