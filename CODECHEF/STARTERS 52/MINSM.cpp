#include <bits/stdc++.h>
#define ll long long
using namespace std;

template <typename T>
bool allEqual(vector<T> const &v)
{
    return adjacent_find(v.begin(), v.end(), not_equal_to<T>()) == v.end();
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll sum(vector<ll> arr)
{
    ll ans = 0;
    for(auto it : arr)
    {
        ans += it;
    }
    return ans;
}
int main()
{
    fastIO;
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
        ll mini = *min_element(arr.begin(), arr.end());
        if(allEqual(arr))
        {
            cout << sum(arr) << "\n";
        }
        else
        {
            vector<ll> arr1(n, mini);
            cout << sum(arr1) << "\n";
        }
    }
    return 0;
}