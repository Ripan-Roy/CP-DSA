#include <bits/stdc++.h>
#define ll long long
using namespace std;

// void countSort(vector<ll> &arr)
// {
//     int max = *max_element(arr.begin(), arr.end());
//     int min = *min_element(arr.begin(), arr.end());
//     int range = max - min + 1;

//     vector<int> count(range), output(arr.size());
//     for (int i = 0; i < arr.size(); i++)
//     {
//         count[arr[i] - min]++;
//     }
//     for (int i = 1; i < count.size(); i++)
//     {
//         count[i] += count[i - 1];
//     }
//     for (int i = arr.size() - 1; i >= 0; i--)
//     {
//         output[count[arr[i] - min] - 1] = arr[i];
//         count[arr[i] - min]--;
//     }

//     for (int i = arr.size() - 1; i >= 0; i--)
//     {
//         arr[i] = output[i];
//     }
//     reverse(arr.begin(), arr.end());
// }

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
        map<ll , ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll count = 0;
        for(auto it: arr)
        {
            mp[it]++;
            count = max(count, mp[it]);
        }
        ll ans = n - count;
        cout << ans << "\n";
    }
    return 0;
}