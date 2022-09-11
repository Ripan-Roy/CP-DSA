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
        vector<ll> arr(n + 1);
        for (ll i = 0; i <= n; i++)
        {
            cin >> arr[i];
        }
        ll XOR = arr[0];
        ll temp = 0;
        for (ll i = 1; i <= n; i++)
        {
            XOR = XOR ^ arr[i];
        }
        for (ll i = 0; i <= n; i++)
        {
            if (arr[i] == XOR)
            {
                temp = i;
                break;
            }
        }
        vector<ll> arr2;
        for (ll i = 0; i <= n; i++)
        {
            if (temp != i)
            {
                ll y = XOR ^ arr[i];
                arr2.push_back(y);
            }
        }
        ll size = arr2.size();
        for (ll i = 0; i < size; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}