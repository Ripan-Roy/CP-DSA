// boilerplate cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    ll sum = 0;
    for (ll i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    ll minSum = sum;
    ll minIndex = 0;
    for (ll i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        if (sum < minSum)
        {
            minSum = sum;
            minIndex = i - k + 1;
        }
    }
    cout << minIndex + 1 << endl;
}

int main()
{
    fastIO();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}