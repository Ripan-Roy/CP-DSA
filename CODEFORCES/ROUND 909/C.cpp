#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool pairity(ll a, ll b)
{
    if (abs(a % 2) == abs(b % 2))
    {
        return true;
    }
    return false;
}

ll kadens(vector<ll> &arr, ll l, ll r)
{
    ll maxSum = INT_MIN, curSum = 0;
    for (int i = l; i <= r; i++)
    {
        curSum += arr[i];
        if (maxSum < curSum)
        {
            maxSum = curSum;
        }

        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return maxSum;
}

void helper()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    if (n == 1)
    {
        cout << arr[0] << "\n";
        return;
    }
    ll prev = 0;
    ll ans = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (pairity(arr[i], arr[i - 1]))
        {
            ans = max(ans, kadens(arr, prev, i - 1));
            prev = i;
        }
    }
    ll maxTotal = kadens(arr, prev, n - 1);
    ans = max(ans, maxTotal);
    cout << ans << "\n";
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}