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
        ll count = 0;
        vector<ll> ans(arr.begin(), arr.end());
        sort(ans.begin(), ans.end());
        ll temp1 = 0, temp2 = 0;
        vector<ll> remainder;
        while (temp1 < n && temp2 < n)
        {
            if (arr[temp1] == ans[temp2])
            {
                temp1++;
                temp2++;
            }
            else
            {
                remainder.push_back(arr[temp1]);
                temp1++;
            }
        }
        vector<ll> ans2 = remainder;
        sort(ans2.begin(), ans2.end());
        if (remainder == ans2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}