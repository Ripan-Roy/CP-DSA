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
        map<ll, ll> hash;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            hash[arr[i]]++;
        }
        ll maxElement = *max_element(arr.begin(), arr.end());
        ll count = 0;
        ll maxCount = 0;
        for (auto it : hash)
        {
            if (it.second == 1)
            {
                count++;
            }
            maxCount = max(maxCount, it.second);
        }
        ll ans = 0;
        if (count % 2 == 0)
        {
            ans = count / 2;
        }
        else
        {
            if (hash[maxElement] == 1 && maxCount == 2)
            {
                ans = count / 2 + 2;
            }
            else
            {
                ans = count / 2 + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}