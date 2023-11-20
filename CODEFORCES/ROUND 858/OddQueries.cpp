#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> prefSum(n, 0);
    prefSum[0] = arr[0];
    for (ll i = 1; i < n; i++)
    {
        prefSum[i] = prefSum[i - 1] + arr[i];
    }
    vector<ll> suffixSum(n, 0);
    suffixSum[n - 1] = arr[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        suffixSum[i] = suffixSum[i + 1] + arr[i];
    }
    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        l--;
        r--;
        ll leftSum = 0;
        ll rightSum = 0;
        ll totalSum = 0;
        if (l == 0)
        {
            leftSum = 0;
        }
        else
        {
            leftSum = prefSum[l - 1];
        }
        if (r == n - 1)
        {
            rightSum = 0;
        }
        else
        {
            rightSum = suffixSum[r + 1];
        }
        totalSum = leftSum + rightSum + (r - l + 1) * k;
        if (totalSum % 2 == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}